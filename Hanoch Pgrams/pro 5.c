#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num =0;
    float *marks;
    float total,per;
    printf("give the total value of the marks in one subject");
    scanf("%f",&per);
    printf("enter number of subjects:-");
     marks = (float*)malloc(num);
    for(int i = 0;i<num;i++)
    {
        printf("give marks %d :-",i+1);
        scanf("%f",&marks[i]);
    }
    for(int i = 0;i<num;i++)
    {
        total += marks[i];
    }
    printf("the total is %f\n the avg is %f\nThe percentage is %f\n",total,(total/num),(total*100/per));
    return 0;
}
