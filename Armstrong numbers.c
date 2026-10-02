#include<stdio.h>
void main()
{
    int n,original,rem,sum=0;
    printf("enter the  number");
    scanf("%d", &n);
    original=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if (sum==original)
        printf("%d is amstrong numbers",original);
    else
     printf("%d is not an amstrong number",original);

}
