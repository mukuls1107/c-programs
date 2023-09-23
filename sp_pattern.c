/*
.....A
....AB
...ABC
..ABCD
.ABCDE
ABCDEF    

*/

#include <stdio.h>

void main()
{
    char i,k,j;

    for(i='F'; i >='A'; i--){
        for(k='F'; k>i; k--){
            printf(".");
        }
        for(j=i; j >= 'A'; j--){
            printf("%c",j);
        }
        printf("\n");
    }
}