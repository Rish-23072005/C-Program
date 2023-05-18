#include <stdio.h> 
int main()
{
    int i, j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c",'A'-1 + j);
        }
        printf("\n");
    }
   return 0;
}