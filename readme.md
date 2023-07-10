# **B-- Compiler**

- Lexer and Parser for a toy programming language B-- using Lex and Yacc
- For details of B-- language refer project_docs.pdf file

**command for running the code**
>
    lex BMM_Scanner.l && yacc -d BMM_Parser.y && cc lex.yy.c y.tab.c -o bmm && ./bmm ./filename
