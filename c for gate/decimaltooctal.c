#include<stdio.h>
void fun(int n){
    // if(n==0 || n==1){   // 0 considered as the code executed
    //    printf("%d",n);
    //     return;
    // }
    // fun(n/8);
    // printf("%d",n%8);
     if(n==0){  // 0 considered as the code executed
       printf("%d",n);
        return;
    }
    fun(n/8);
    printf("%d",n%8);
    
}
    int main(){
        int n;
        printf("enter the value of n:");
        scanf("%d",&n);
        fun(n);
    }
