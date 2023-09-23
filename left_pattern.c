/*
ABCDEF
ABCDE
ABCD
ABC
AB
A
*/


#include <stdio.h>

void main()
{
    char i, j;
    for(i = 'F'; i >= 'A'; i--){
        for(j = 'A'; j<= i; j++ ){
            printf("%c", j);
        }
        printf("\n");
    }
}