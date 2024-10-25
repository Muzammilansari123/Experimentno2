#include<stdio.h>
int main()
{
    int a;
    printf("\t\tEven Odd Finder \n\n");
    printf("Enter a:");
    scanf("%d",&a);

    if(a%2==0)
    {
    printf("%d is Even",a);
    }
    else
    {
    printf("%d is odd",a);
    }
    return 0;
}
