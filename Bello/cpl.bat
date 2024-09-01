bison -dv --yacc bello.y
flex  bello.l 
g++ lex.yy.c y.tab.c -o bello.exe
