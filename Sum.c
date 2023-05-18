#include<stdio.h>
int sum(int x,int y);//declare Function
int main(){
    int a,b,s;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    s=sum(a,b);//calling function
    printf("%d",s);
    return 0;
}
int sum(int x,int y){
    int s;
    s=x+y;
    return s;
}
//output:
//Enter a and b:25 25
//sum=50
