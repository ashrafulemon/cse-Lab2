#include<stdio.h>
int main()
{

    int x;
    scanf("%d",&x);
    if(x%3==0)
        printf("FIZZ");
    if(x%5==0)
        printf("BUZZ");

    return 0;
}
