#include <stdio.h>
void f(int n)
{
//     if (n == 1 || n == 0)
//     {
//         printf("%d", n);

//         return;
//     }
//     f(n / 2);

//     printf("%d", n % 2);
// }
// if (n == 1)
//     {
//         printf("%d", n);

//         return;
//     }
//     f(n / 2);

//     printf("%d", n % 2);
// }
if ( n == 0)
    {
       
        return;
    }
    f(n / 2);

    printf("%d", n % 2);
}
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    f(n);
}
