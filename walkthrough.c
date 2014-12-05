/* ASCII Decimal Values: read down a column to find the ASCII value of the
   character in the bottom row (for example, A is 65)  11111111111111111111111
   445555555555666666666677777777778888888888999999999900000000001111111111222
   890123456789012345678901234567890123456789012345678901234567890123456789012 */
/* 0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz */

#include <stdio.h>
void d ( char s[], int a[], int n );

int main ( void ) {
    char s[] = "shhckv";
    int i, j;
    int k[] = {4, 1, 6, 1};
    int m[] = {-4, 3, -5, 10, 6, -4};

    printf("%s\n", s);
    d( s, k, 4 );
    printf("%s\n", s);
    d( s, m, 6 );
    printf("%s\n", s);
    return 0;
}

void d ( char s[], int a[], int n ) {
    int i, j = 0;

    for ( i = 0; s[i] != '\0'; i++ ) {
        s[i] += a[j];
        j++;
        if (j == n)
            j = 0;
    }
}


/*
shhckv
window
slinus
*/
