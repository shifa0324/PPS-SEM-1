#include<stdio.h>
void main ()
{
   int n;
   float a,b,c;
   printf("enter 1st number\n");
   scanf("%f", &a);
   printf("enter 2nd number\n");
   scanf("%f", &b);
   printf("enter case");
   scanf("%d", &n);
   switch(n)
   {
   case 1:
    c=a+b;
    printf("sum of two numbers=%f",c);
    break;
   case 2:
    c=a-b;
    printf("subtraction of two numbers=%f",c);
    break;
   case 3 :
    c=a*b;
    printf("multiplication of two numbers=%f",c);
    break;
   case 4:
    c=a/b;
    printf("division of two numbers=%f",c);
    break;
   default:
    printf("Invalid Case");
   }
}
