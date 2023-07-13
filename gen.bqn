bqnlibs‿resFile ← •args

⟨Export⟩ ← •Import bqnlibs•file.At "json.bqn"
Str ← ×∘≠◶""‿⊢
Map ← {𝕨≍○((@≢¨𝕩)⊸/)𝕩}˝⍉∘>

FE ← ×∘≠¨⊸/
_sw ← {𝕗≡(≠𝕗)↑𝕩}
SSW ← {FE (+`𝕨 _sw¨ 𝕩)⊔𝕩}
SV ← {(+`(≠𝕩)↑𝕨⍷𝕩) ⊔ 𝕩}
S1 ← {(⊑1⊐˜𝕨=𝕩) (↑⋈1⊸+⊸↓) 𝕩}
Jn ← {(-≠𝕨)↓""(⊣∾𝕨∾⊢)´𝕩}

Alnum ← {2|("09AZ__az"+8⥊0‿1)⍋𝕩}

PF ← {
  ");"≢¯2↑𝕩? @;
  p1‿p2 ← "__riscv_" SV ¯2↓𝕩
  p3‿p4 ← " ("SV p2
  ⟨
    ¯1↓p1
    p3
    {m←∧`⌾⌽Alnum 𝕩 ⋄ ⟨(∨`' '⊸≠)⊸/⌾⌽ (¬m)/𝕩, m/𝕩⟩}¨ 2⊸↓¨⌾(1⊸↓) ", "SV 2↓p4
  ⟩
}
_RMF_ ← {(𝔽𝕘⊸(≠∘⊣ × ⊣≡(𝔽≠)⊸↑))⊸↓ 𝕩}

ln←@+10

•Out "Loading non-overloaded.."
no ← (∨´"__"⊸⍷)¨⊸/ ∾•FLines¨ ∧(<•file.At¨•file.List) "auto-generated/intrinsic_funcs"
noi ← 0

•Out "Loading overloaded.."
lns ← FE •FLines "auto-generated/overloaded_intrinsic_funcs.md"

•Out "Processing.."
res ← ⟨⟩
g1 ← "## " SSW lns
cci ← ⟨⟩
{
  g1n ← -_RMF_" Functions" ¯1↓3↓⊑𝕩
  {𝕊: g1n↩"Miscellaneous"}⍟⊢ g1n≡"Miscellaneous Vector Functions"
  g2 ← "### "SSW 1↓𝕩
  # •Out g1n
  {
    g2r ← ¯1↓4↓⊑𝕩
    ! '['≡⊑g2r
    g2n‿g2l ← 0‿¯1↓¨ 1‿2↓¨ "](" SV g2r
    g2n -_RMF_" Functions"↩
    g2n '`'⊸≠⊸/↩
    # •Out "  "∾g2n∾" @ "∾g2l
    code ← ((≠`∧¬) "```"_sw¨)⊸/ 1↓𝕩
    pc ← {"// "≡3↑⊑𝕩? ⟨3↓⊑𝕩 ⋄ 1↓𝕩⟩; ⟨@ ⋄ 𝕩⟩}¨ "// " SSW code
    {2≡≠pc? @‿"masked functions"≡⊑¨pc? pc ⟨"non-masked", "masked"⟩⌾(⊑¨)↩; @}
    
    # {n‿g: •Out "    "∾n}¨ pc
    {1<≠𝕩? {!@≢⊑𝕩}¨ 𝕩; @} pc
    
    { g3n‿fs:
      rl ← @⊸≢⊸/ {
        noi+↩1
        g3n≡"masked"?@;
        nrt‿nname‿nargs ← PF (noi-1)⊑no
        rt‿name‿args ← PF 𝕩
        ! nrt ≡ rt
        ! nargs ≡ args
        
        
        cname ← nname
        # cname ⊢_RMF_"__riscv_"↩
        cci∾↩< {{"_t"≡¯2↑𝕩? 'x'≡¯4⊑𝕩; 0}rt? @; ⟨≠res, rt, cname, args⟩} # tuple-returning functions crash
        res∾↩ < Map ⟨
          "ret"  ⋈ Map ⟨"type"‿rt⟩
          "name" ⋈ nname
          "args" ⋈ {t‿n: Map⟨"type"⋈t, "name"⋈n⟩}¨ args
          
          "archs"⋈ ⋈"rvv"
          "desc" ⋈ "<br>" Jn @⊸≢¨⊸/ ⟨
            {nname≢name? "Overloaded name: <code>"∾name∾"</code>"; @}
            {(g3n≢"non-masked") ∧ g3n≢@? g3n; g2n} # {(g3n≡"masked") ∨ g3n≡"non-masked"? g2n∾" ("∾g3n∾")"; g3n≢@? g3n; g2n}
          ⟩
          "categories"   ⋈ ⋈ {𝕨∾'|'∾𝕩}´ @⊸≢¨⊸/ ⟨g1n, g2n, g3n⟩
          "implDesc"     ⋈ g2l
        ⟩
        @
      }¨ fs
    }¨ pc
  }¨ g2
}¨ g1

ConstantMask ← { # argument is list of type-name pairs
  r ← {
    ∨´ m ← 𝕩≡¨<"unsigned int"? m;
    ∨´ m ← 𝕩≡¨<"size_t"? m;
    ! 0
  } ⊑¨ 𝕩
  ! 1 = +´r
  r
}

testC ← "test.c"
testO ← "test.o"
CArgs0 ← {n‿rt‿cname‿args: •Repr⌾⊑ 𝕩∾< ", "Jn 1⊑¨ args}
_cArgs1_ ← { badMap‿Val _𝕣_ Otherwise:
  {
    n‿rt‿cname‿args: n⊑badMap?
      •Repr⌾⊑ 𝕩∾< ", "Jn (ConstantMask args) {𝕨? Val n; 1⊑𝕩}¨ args;
    Otherwise 𝕩
  }
}
_tryC ← { CArgs _𝕣 𝕩:
  ccode ← ∾⟨
    "#include <riscv_vector.h>", ln
    "typedef _Float16 float16_t;", ln
    "typedef float float32_t;", ln
    "typedef double float64_t;", ln
  ⟩
  { 𝕊 cfn‿rt‿cname‿args‿av:
    av≢@?
    ccode∾↩ ∾⟨
      rt, " testfn", cfn, "(", ", "Jn{t‿n: t∾" "∾n}¨ args, ") {", ln
        (rt≢"void")/"return "
        cname, "(", av, ");"
        ln
      "}", ln
      ln
    ⟩
    @;@
  }¨ @⊸≢¨⊸/ CArgs @⊸≢¨⊸/ cci
  testC •FChars ccode
  c‿o‿e ⇐ {raw⇐1}•SH ⟨
    "clang-17", "-fno-color-diagnostics", "--target=riscv64-linux-gnu", "-ferror-limit=999999"
    
    "-menable-experimental-extensions"
    "-march=rv64gcvzvfh0p1"
    
    "-O3", "-c"
    "-o", testO
    testC
  ⟩
}
{
  •Out "Running C 1.."
  c‿o‿e ← CArgs0¨ _tryC @
  ! c≢0
  FWith ← {(∨´𝕨⊸⍷)¨⊸/ 𝕩}
  badNames ← {𝕩/˜(≠`∧¬)𝕩='''}¨ "must be a constant integer" FWith ln SV e
  badIDs ← badNames ⊐˜ {@:@; 2⊑𝕩}¨ cci
  badMap ← (≠cci)↑/⁼badIDs
  ! badIDs ≡ ⊑¨ badMap/cci
  •Out "Running C 2.."
  c‿o‿e ↩ badMap‿("999"∾•Repr) _cArgs1_ @¨ _tryC @
  ! c≢0
  ri‿rr ← <˘ ⍉> {a‿b←' 'S1 9↓1⊑"value 999"SV 𝕩 ⋄ c‿d←'['S1 b ⋄ ⟨•ParseFloat a ⋄ •ParseFloat¨ ¯1↓¨' 'S1 d⟩}¨ "is outside the valid range" FWith ln SV e
  ! ri ≡ badIDs
  •Out "Running C 3.."
  c‿o‿e ↩ { 𝕊:
    r ← CArgs0¨ @⊸≢¨⊸/ (¬badMap)/cci
    r∾↩ ∾ rr {a‿b 𝕊 v: {∾⟜("_"∾•Repr 𝕩)⌾⊑ ⟨badMap, •Repr ⊑𝕩⟩ _cArgs1_ @ v}¨ a+↕1+b-a}¨ badMap/cci
    r
  } _tryC @
  { 𝕊:
   •term.OutRaw o
   •term.ErrRaw e
   •Exit c
 }⍟× c
}

{
  •Out "Running objdump"
  c‿o‿e ← •SH "objdump"‿"-D"‿testO
  ! c≡0
  ai‿av ← <˘⍉> {
    n ← •ParseFloat¨ '_'⊸≠⊸/¨ '_'SV ⊑'>'S1 1⊑'n'S1 ⊑𝕩
    ins ← {{' '¨⌾((𝕩=@+9)⊸/) 𝕩} 1↓𝕩/˜2≤+`(@+9)⊸=𝕩}¨ 1↓¨(∧`("ret"≢¯3↑⊢)¨)⊸/ 1↓𝕩
    (⊑n) ⋈ (1⊑2↑n∾@) ⋈ ins
  }¨ 1↓ (+` ((∨´"<testfn"⊸⍷) ∧ (":"≡¯1↑⊢))¨)⊸⊔ ln SV o
  res ↩ res {
    𝕩≡⟨⟩?𝕨;
    r ← 𝕨
    [v,asm] ← ⍉>𝕩
    r {{(ConstantMask 1⊏¨𝕩) {𝕨? 𝕩∾˘≍˘"info"⋈∾⟨"range: [",•Repr⌊´v,";",•Repr⌈´v,"]"⟩; 𝕩}¨ 𝕩}⌾(1‿2⊸⊑) 𝕩}⍟(⟨@⟩≢v)↩
    AE ← {⟨⟩: ⋈"(no-op)"; 𝕩}
    { 𝕊:
      r∾˘↩≍˘ "implInstrRaw"⋈ Str ¯1↓ ∾ ∾⟜(@+10)¨ ∾asm
    }⍟⊢ 1 ≡ ≠asm
    r
  }¨ ai⊔av
}



•Out "Converting to JSON.."
j ← Export res
•Out "Writing file.."
resFile •FChars j
•Out "Done"