#include<stdio.h>
int larger(int x,int y);
int main(){
    int x,y;
    printf("Enter a number x and y:");
    scanf("%d%d",&x,&y);
    printf(" Larger-%d\n",larger(x,y));
    return 0;
}
int larger(int x,int y){
    return x>y?x:y;
}
/* output: Enter a number x and y:
65 76
 Larger-76
*/
