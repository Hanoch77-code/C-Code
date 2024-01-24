#include <stdio.h>
#include <stdlib.h>
void draw_triangle(int  side,char * hatching,int x1,int y1)
{
    for(int x = 0;x < side;x++)
    {
        for(int y = 0;y <= x;y++){
         printf("%c",hatching);
         for(int i = 0;i <=y1;i++)
         {
             printf(" ");
         }
        }
        for(int i = 0;i <= x1;i++){
        puts("");
        }
    }
    return NULL;
}
int main()
{
    printf("*****\n\n");
    puts("* * * * *\n* * * * *\n\n\n");
    char * s = 'x';

    draw_triangle(12,'w',2,4);
    return 0;
}



