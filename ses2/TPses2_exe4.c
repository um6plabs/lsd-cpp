#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n;
  printf("\nPlease enter the size of your array: ");
  scanf("%d", &n);
  int* p = (int*)malloc(sizeof(int)*n);
  printf("\nEnter the elements of your array. \n");
  for(int i=0; i<n; i++){
    printf("\nelement number %d: ",i);
    scanf("%d", p+i);
  }
  printf("\nYour array is: ");
  for(int i=0; i<n-1; i++){
    printf("%d, ", *(p+i));
  }
  printf("%d.\n",*(p+n-1));
  
  return (0);
}