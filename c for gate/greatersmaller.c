#include<stdio.h>
int main(){
    int a,b;
    printf("enter the two number\n");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is greatetr ",a);
    }
    else{
        printf("%d is smallest ",a);
    }
    return 0;
}