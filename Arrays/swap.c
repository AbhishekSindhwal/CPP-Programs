#include<stdio.h>
void swap(int a , int b);
void swapR (int *a , int *b );
int main() {
int a , b ; 
printf("Enter first number: \n");
scanf("%d",&a);
printf("Enter second number: \n");
scanf("%d",&b);
swap(a,b);
printf("After swapping : %d  %d\n",a,b );
swapR(&a,&b);
printf("After swapping : %d  %d\n",a,b );
return 0;
}
void swap(int a, int b)
{
  int temp;
 temp = a ;
a = b ;
b = temp ;
}
void swapR (int *a , int *b )
{
int temp ;
 temp = *a ;
 *a = *b ;
 *b = temp ;
 }
