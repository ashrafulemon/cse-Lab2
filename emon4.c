#include<stdio.h>
int main()
{

    int x;
    scanf("%d",&x);
    if(x>=80 && x<=100)
        printf("A+\n");
    else if(x>=70 && x<80)
        printf("A\n");
    else if(x>=60 && x<70)
        printf("B+\n");
    else if(x>=50 && x<60)
        printf("B\n");
    else if(x>=40 && x<50)
        printf("C\n");
    else
        printf("F\n");

    return 0;
}
