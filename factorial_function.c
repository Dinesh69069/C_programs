#include"stdio.h"
int factorial(int);
int main()
{
        int x,n;
        printf("Entaer any mumber :");
        scanf("%d",&n);
        x=factorial(n);
        printf("%d",x);
}
int factorial(int n)
{
        int num=n,s=0,factorial;
        for(factorial=1 ; factorial<=num ; factorial++)
        {
                s=s*factorial;
        }
        return factorial;
}
