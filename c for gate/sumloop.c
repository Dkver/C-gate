#include<stdio.h>
void main(){
    int i,n, sum=0;
    printf("enter the number n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum of the number is %d",sum);

}