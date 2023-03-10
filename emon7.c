
#include<stdio.h>
int main()
{

    int x;
    scanf("%d",&x);
    if(x>0)
        printf("Positive\n");
    else if(x<0)
        printf("Negative\n");
    else
        printf("Zero\n");

    return 0;
}
