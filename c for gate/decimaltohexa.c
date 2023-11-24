#include <stdio.h>
void fun(int n)
{
    if (n == 0 || n == 1)
    { // all good if n==1 correct answer
        printf("%d", n);
        return;
    }
    fun(n / 16);

    
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
//if (n == 0)
//     { // all good if n==1 correct answer
//         printf("%d", n);
//         return;
//     }
//     fun(n / 16);

    
//    switch (n%16)
//    {
//     char ch;
//    case 10: printf("%c",'A');
//     break;
//     case 11: printf("%c",'B');
//     break;
//     case 12: printf("%c",'C');
//     break;
//     case 13: printf("%c",'D');
//     break;
//     case 14: printf("%c",'E');
//     break;
//     case 15: printf("%c",'F');
//     break;

   
//    default: printf("%d", n % 16);
   

//     break;
//    }
// }
 
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    fun(n);
}