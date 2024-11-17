#include"stdio.h"
int reverse(int);
int main()
{
        int x,n;
        printf("Enter any number:");
        scanf("%d",&n);
        x=reverse(n);
        printf("%d",x);
}
int reverse(int n)
{
        int r,s=0;
        while(n>0)
        {
                r=n%10;
                s=s*10+r;
                n=n/10;

        }
        return s;
}
