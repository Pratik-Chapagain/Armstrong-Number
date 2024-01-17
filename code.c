#include<stdio.h>
#include<conio.h>
int main()
{
    int n,arm,c,r;
    printf("Enter any Number\n:");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm)
    printf("It is a armstrong number\n");
    else
    printf("It is not an armstrong number\n");
    return 0;
}
