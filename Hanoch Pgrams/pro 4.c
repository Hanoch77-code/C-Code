#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter first number-");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("a = %d, b= %d\n",a,b);
    printf("the sum is %d\n",(a+b));
    if(a<b){
    printf("the difference is %d\n",(b-a));}
    else{printf("the difference is %d\n",(a-b)); }
    printf("the product is %d\n",(a*b));
    if(a<b)
    {
        printf("the division is %d\n",(b/a));
    }
    else
    {
        printf("the division is %d\n",(a/b));
    }
    printf("increment a and b we get a = %d,b = %d\n",++a,++b);
    printf("decrement a and b we get a = %d,b = %d\n",(--a),(--b));
    return 0;

}
