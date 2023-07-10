name of contributors:
 1.Gattu pavithran (2021CSB1088)
 2.Kola sai datta (2021CSB1106)

In this folder there are 7 files :
 
1.BMM_Scanner.l
2.BMM_parser.y
3.CorrectSample.bmm
4.IncorrectSample.bmm
5.scanner.txt
6.parser.txt
7.README.txt

Now the following commands should be used to run the Program 
          1. lex BMM_Scanner.l
          2. yacc -d BMM_parser.y
          3. cc lex.yy.c y.tab.c -o bmm -ll
          4. ./bmm ./filename
		
all combined:
	lex BMM_Scanner.l && yacc -d BMM_Parser.y && cc lex.yy.c y.tab.c -o bmm && ./bmm ./filename

Scanner.txt : in this file we are printing all the tokens from the input code.

parser.txt : in this file we are printing output which was parsed by the file BMM_parser.y and printed the different types of statements in it. 

