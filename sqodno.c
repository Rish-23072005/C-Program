#include<stdio.h>
int func();
int main(){
    printf("%d\n",func());
    return 0;
}
int func()
{
    int num,s=0;
    for(num=1;num<=25;num++){
        if(num%2!=0)
        s+=num*num;
    }
    return s;
}