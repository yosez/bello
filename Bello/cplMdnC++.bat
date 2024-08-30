bison -dv --yacc bello.y
flex  bello.l 
g++ --std=c++17 lex.yy.c y.tab.c -o bello.exe
