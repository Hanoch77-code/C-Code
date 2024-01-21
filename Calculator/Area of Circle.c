#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,area;
    printf("Enter the radius -");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("The area of circle with radius %f is %f\n",r,area);
    return 0;
}
