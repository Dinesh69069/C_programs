#include"stdio.h"
int sumdigit(int);
int main()
{
        int x,n;
        printf("Enter any number:");
        scanf("%d",&n);
        x=sumdigit(n);
        printf("%d",x);
}
int sumdigit(int n)
{
        int r,s=0;
        while(n>0)
        {
                r=n%10;
                s=s+r;
                n=n/10;

        }
        return s;
}
