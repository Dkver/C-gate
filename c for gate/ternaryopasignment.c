#include<stdio.h>
void main(){
    // int a;             // 1   op= 20
    // a=10?20:30;
    // printf("%d",a);
    // int a;                 // 2   op= 30
    // a=5<2?20:30;
    // printf("%d",a);
    // int a;                     // 3   op= 10
    // a=2<5 && !0?10:20;
    // printf("%d",a);
    // int a;                      // 4   op= error
    // a=10?20 ;
    // printf("%d",a);
    // int a;                  //5   op= error
    // a=10:20?50;
    // printf("%d",a);
    // int a;                    // 6   op= give error
    // a=10<20?50:30:60;
    // printf("%d",a);
    // int a;                     // 7    op= error
    // a=20>10?10:30:60<70?20;
    // printf("%d",a);
    // int a;                       // 8    op=400
    // a=20>100?100:!12!=3>50?300:400;
    // printf("%d",a);
    // int a;                                // 9   op= error in code
    // a=20>100>100:!12!=3>50?300:400 ;
    // printf("%d",a);
    // int a;                        // 10   op= 10
    // a=20<60?12!=200>346?10:20:30;
    // printf("%d",a);
    // int a;                           // 11  op= 10
    // a=20<60?12!= 200>346?10:20:30;
    // printf("%d",a);
    // int a;                            // 12   op= 40
    // a= 2>5?10:5<8!=1?20:!5?30:40;
    // printf("%d",a);
    // int a;                           // 13  op = 20
    // a=5>2!=1?10:2<5?1!=2>5?20:30:40;
    // printf("%d",a);
    // int a;                              // 14   op= 20
    // a=10!=12>50?!4!=4?8>8!=0?10:20:30:40;
    // printf("%d",a);
    // int a;                                    // 15 op= 20
    // a= 2>5!=1?5<8 && 8>2?!5?10:20:30:40;
    // printf("%d",a);
    // int a;                                         // 16  op= 40
    // a= 2>5?1!=2>5?10:20:5<8?2!=2>5?!5?30:!1!=1?40:50:60:70;
    // printf("%d",a);
    // int a;                                       //  17   op= 40
    // a=12>50? 1!=2>5?10:20<30||!2:5<8?2!=2>5?!5?30:!1!=1?40:50:60:70;
    // printf("%d",a);
    // int a;                                       // 18     op= neeraj6
    // a=12>50?printf("pankaj"):printf("neeraj");
    // printf("%d",a);
    // int a;                                         // 19    op = pankaj61
    // a=120>50?printf("%d",printf("pankaj")):printf("neeraj");
    // printf("%d",a);
    // int a;                                          // 20 op= neeraj6
    // a=12>50?printf("GATE")||printf("%d",printf("pankaj")):printf("neeraj");
    // printf("%d",a);
    // int a;                                          // 21 op=GATECSE1
    // a=120>50?printf("GATE")&&printf("CSE")||printf("pankaj"):printf("neeraj");
    // printf("%d",a);
    // int a;                                  // 22   op= GATEpankaj1
    // a=120>50?!printf("GATE")&&printf("CSE")||printf("pankaj"):printf("neeraj");
    // printf("%d",a);
    int a;                              // 23   op= GATECSEpankaj1
    a=120>50?!(printf("GATE")&&printf("CSE"))||printf("pankaj"):printf("neeraj");
    printf("%d",a);

}