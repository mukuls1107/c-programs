#include <stdio.h>

int main() {
    long a, b, c = 0, d;
    
    printf("Enter a number: ");
    scanf("%ld", &a);
    
    b = a;
    
    reverse:
    d = a % 10;
    c = c * 10 + d;
    a /= 10;
    
    if (a != 0)
        goto reverse;
    
    if (b == c)
        printf("%ld is a palindrome.\n", b);
    else
        printf("%ld is not a palindrome.\n", b);
    
    return 0;
}
