#include<stdio.h>
int count=0;
void f(int n){
    if(n>0){
       n=n/10;
       count++;
       return f(n);
    }
    printf("%d",count);
}
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    f(n);
}