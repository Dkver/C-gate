#include<stdio.h>
void main(){
    int i,n,pro=1;
    printf("enter the number n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        pro=pro*i;
    }
    printf("the product of the number is %d",pro);

}