
#include<stdio.h>
int main()
{

    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y)
        printf("first number is greater than another\n");
    else if(x<y)
        printf("first number is less than another\n");
    else
        printf("first number is equal another\n");

    return 0;
}
