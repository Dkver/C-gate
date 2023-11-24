#include <stdio.h>
void f(int n)
{
    if (n == 1 || n == 0)
    {
        printf("%d", n);

        return;
    }
    f(n / 2);

    printf("%d", n % 2);
   
}

void g(int n){
if(n==0 || n==1){   // 0 considered as the code executed
       printf("%d",n);
        return;
    }
    g(n/8);
    printf("%d",n%8);
    
}
void h(int n){
    if (n == 0 || n == 1)
    { // all good if n==1 correct answer
        printf("%d", n);
        return;
    }
    h(n / 16);

    
   switch (n%16)
   {
    char ch;
   case 10: printf("%c",'A');
    break;
    case 11: printf("%c",'B');
    break;
    case 12: printf("%c",'C');
    break;
    case 13: printf("%c",'D');
    break;
    case 14: printf("%c",'E');
    break;
    case 15: printf("%c",'F');
    break;

   
   default:
   printf("%d", n % 16);

    break;
   
}
}
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    f(n);
    printf("\n");
    g(n);
    printf("\n");
    h(n);
}