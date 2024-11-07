#include"stdio.h"
int cheak_prime(int);
int main()
{
        int x,n;
        printf("Enter any number :");
        scanf("%d",&n);
        x=cheak_prime(n);
        if(x<=2)
                printf("Prime");
        else
                printf("Not Prime ");

}
int cheak_prime(int n)
{
        int num=n,fact,count=0;
        for(fact=1;fact<=num;fact++)
                if(num%fact==0)
                        count++;
        return count;
}