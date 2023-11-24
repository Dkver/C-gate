#include<stdio.h>
void f(int n){
    if(n){
printf("%d\n",n);
n--;
 return f(n);
}
}
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    f(n);
}