# copy(query_found.map(c=>c.name).join("\n"))
bqnlibs‿in‿out ← •args
⟨Export⟩ ← •Import bqnlibs•file.At"json.bqn"

nm ← {"_m"≢¯2↑𝕩}¨⊸/ •FLines in
policies ← "_m"‿"_tu"‿"_mu"‿"_tum"‿"_tumu"
xn ← {𝕊v: {v∾𝕩}¨policies}¨ nm
testC ← "test.c"
testC •FLines ⟨
  "#include<riscv_vector.h>"
  "int f() {"
⟩∾({∾⟨"void* f",•Repr 𝕩,"=",𝕨,";"⟩}¨⟜↕⟜≠ ∾xn)∾⟨"}"⟩
c‿o‿e ← •SH⟨
  "clang"
  "--target=riscv64-linux-gnu"
  "-menable-experimental-extensions"
  "-march=rv64gcvzvfh0p1"
  "-ferror-limit=999999"
  testC
⟩
lns ← (@+10) ((⊢-˜+`×¬)∘=⊔⊢) e
lns2 ← {∨´"error: "⍷𝕩}¨⊸/ lns
xv ← {
  ∨´"use of undeclared identifier"⍷𝕩? 0;
  ∨´"builtin functions must be directly called"⍷𝕩? 1;!0
}¨ lns2

xvg ← <˘ ⟨∘,≠policies⟩⥊xv
•Show +˝xvg
xi ← {2⊸×⊸+˜´⌽𝕩}¨ xvg
•Show ⍉↕∘≠⊸≍ /⁼ xi

def ← 31
out •FChars Export ⍉>⟨
  "types" ⋈ policies
  "def" ⋈ def
  "data" ⋈ ⍉{def≠1⊑𝕩}˘⊸/ ∾nm {≍⟨8↓𝕨,𝕩⟩}¨ xi
⟩
