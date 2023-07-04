# copy(JSON.stringify(query_found.flatMap(c=>c.variationsIncl).map(c=>[c.name,c.ret.type,[],c.args.map(c=>c.type)])))
bqnlibs‿in ← •args
⟨Parse,Export⟩ ← •Import bqnlibs•file.At"json.bqn"
fns ← Parse •FChars in

ts ← {¬⊑'*'∊𝕩}¨⊸/ ⍷(1⊑¨fns)∾∾3⊑¨fns
vts ← {(𝕩≢"void")∧'v'≡⊑𝕩}¨⊸/ ts

Fixup ← {
  𝕩 {𝕩/˜¬∨⟜»⍟2 0‿0∾˜"_rm"⍷𝕩}↩ # _rm not required in tested clang
  𝕩
}

CLn ← { base‿ret‿ts‿args𝕊i:
  inv ← ∾⟨Fixup base, "(", 1↓∾','∾¨{'*'≡¯1⊑𝕩?"0";'v'≡⊑𝕩?"v_"∾𝕩;"0"}¨ args, ");"⟩
  ⟨{ret≡"void"? inv; ∾⟨ret, " r",•Repr i, " = ", inv⟩}⟩
}

testC ← "test.c"
testC •FLines ⟨
  "#include<riscv_vector.h>"
  "#include<inttypes.h>"
  "#define float64_t double"
  "#define float32_t float"
  "#define float16_t _Float16"
  "void f() {"
  ∾{𝕩∾" v_"∾𝕩∾";"}¨ vts
⟩∾(∾CLn¨⟜↕⟜≠ fns)∾⟨"}"⟩
c‿o‿e ← •SH⟨
  "clang", "-c"
  "--target=riscv64-linux-gnu"
  "-menable-experimental-extensions"
  "-march=rv64gcvzvfh0p1"
  "-ferror-limit=999999"
  testC
⟩

•Out {0≡c? ∾⟨"Passed ", •Repr ≠fns, "!"⟩; "Exit code: "∾•Repr c}
•Out o
•Out e