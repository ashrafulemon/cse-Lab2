#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%400==0){
        printf("Leap year\n");
    }
    else if(year%4==0){
        if(year%100==0){
            printf("Not leap year\n");
        }
        else
            printf("Leap year\n");
    }
    else
        printf("Not leap year\n");

    return 0;

}

/// (year%4==0 && (year%100!=0 || year%400==0))
