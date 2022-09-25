
#include "TP1.h"



//MAIN FILE


int main(){

    int n, m;

    printf("\nenter the integer you wish to print in binary: ");
    scanf("%d", &n);
    char c = n;
    printf("THE RESULT: ");
    print_bits(c);
    printf("\nenter the integer you wish to check whether its MSB is set ot not : ");
    scanf("%d", &m);
    check_msb2(m);
    return 0;
}