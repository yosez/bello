@rem used for msvc compiler
cd "%cd%/src"
bison -dv --yacc bello.y
flex  --wincompat bello.l 



