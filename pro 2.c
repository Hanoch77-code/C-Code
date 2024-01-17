#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c,avg;
    printf("give first number -");
    scanf("%d",&a);
    printf("give second number -");
    scanf("%d",&b);
    printf("give third number -");
    scanf("%d",&c);

    avg = (a+b+c)/3;

    printf("the average of three number is %d\n",avg);
    return 0;
}
