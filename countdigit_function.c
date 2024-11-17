#include"stdio.h"
int count_digit(int);
int main()
{
        int x,n;
        printf("Enter any number:");
        scanf("%d",&n);
        x=count_digit(n);
        printf("%d ",x);
}
int count_digit(int n)
{
        int count=0;
        while(n>0)
        {
                n=n/10;
                count++;
        }
        return count;
}
