#include<stdio.h>
void f(int n){
    static int i=1;
if(n>=i){
printf("%d\n",i);
i++;
 return f(n);
}
}
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    f(n);
}