#include<stdio.h>
// int mul(int x,int y){
//     int ans;
//     ans=x*y;
//     return ans;
// }
    // void main(){
    //     int x,y,ans;
    //     x=10,y=20;
    //     ans=mul(x,y);
    //     printf("%d",ans);
    // }
    void main(){
        int x,y,ans;
        x=10,y=20;
        ans=mul(x,y);
        printf("%d",ans);
    }
    int mul(int x,int y){
    int ans;
    ans=x*y;
    return ans; // implicit decleration of the function
}
  



