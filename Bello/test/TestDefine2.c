#include <stdio.h>

int main(int argc, char *argv[])
{
    int aa;
    int a=1,b=2,c,d=5;
    //aa= a=1,b=2,c,d=5;
    printf("%d",(a=5,b=3,c=4,5));
}