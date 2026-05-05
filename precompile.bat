@rem used for compling lexer and grammar c/c++ codes
cd "%cd%/src"
bison -dv --yacc ./bello.y
flex ./bello.l
