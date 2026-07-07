# used for compling lexer and grammar c/c++ codes
cd "$PWD/src"
bison -dv --yacc ./bello.y
flex ./bello.l