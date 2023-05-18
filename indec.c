#include<stdio.h>
void func(int a,int b);
int main(){
    int x=10,y=20;
    func(x,y);
    printf("%d %d\n",x,y);
    return 0;
}
void func(int a,int b){
    a++;
    b--;
    printf("%d %d\n",a,b);
}
/* output:
11 29
10*/