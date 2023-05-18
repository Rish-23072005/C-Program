#include<stdio.h>
void find(int n);
void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    find(num);
}
void find(int n) {
     if(n%2==0)
     printf("%d even\n",n);
     else
     printf("%d odd\n",n);

    


}