
#include<stdio.h>
int main()
{

    int x,y,z, test;
    scanf("%d %d %d",&x,&y,&z);
    if(x*x==(y*y)+(z*z))
        printf("right angled trianglen");
    else if(y*y==(x*x)+(z*z))
        printf("right angled triangle\n");
    else if(z*z==(x*x)+(y*y))
        printf("right angled triangle\n");
    else
        printf("not\n");


    return 0;
}
