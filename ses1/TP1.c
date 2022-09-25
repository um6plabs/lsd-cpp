#include "TP1.h"

  //============//
 // EXERCICE 1 //
//============//
void check_msb2(int j){

    int msb;
    /* Move first bit of 1 to highest order */

    msb = 1 << (sizeof(int) * 8 -1);

    /* Perform bitwise AND with msb and j */

    if(j & msb)
        printf("MSB of %d is set (1).\n\n", j);
    else
        printf("MSB of %d is not set (0).\n\n", j);

    return;
}


  //============//
 // EXERCICE 2 //
//============//
void print_bits(char n){
    
    for(int i=7; i>=0;i--){

        if( (n >> i) & 1 == 1)
            printf("1");
        else
            printf("0");
    }

    return;
}

  //=================================//
 // EXERCICE 3 (VEUILLEZ VOIR MAIN) //
//=================================//



  //============//
 // EXERCICE 4 //
//============//

void print_nth_bit(int n, int m ){
  print_bits(1<<n & m);
  return;
}

