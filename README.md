Escolher uma LP simplificada que tenha BNF
Definir um subconjunto de regras de produção (mínimo 5) para:
. Definir ERs para cada token do subconjunto selecionado
. Executar o processo NFA-> DFA -> DFA mínimo sem usar ferramenta que automatize tudo
. Implementar o Scanner
. Gerar os códigos para o subconjunto selecionado (válidos e inválidos)
Usar Flex ou equivalente para gerar um Scanner (analisador) para a BNF completa
Gerar arquivos com códigos sem erro e com erro
Mostrar como fica a saída com o Scanner gerado


# Compilador C-

Trabalho da disciplina de Compiladores.

O projeto implementa um compilador para a linguagem C-, com as etapas:
- Análise Léxica
- Análise Sintática
- Análise Semântica
- Geração de código MIPS
- Execução utilizando simulador MIPS

## Tecnologias Utilizadas

- C
- Flex
- Bison
- GCC
- MIPS

## Estrutura

```text
src/
├── lexer/
├── parser/
├── ast/
├── semantic/
└── codegen/