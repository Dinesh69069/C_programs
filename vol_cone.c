#include "stdio.h"

int main()
{
        
        double pi,r,h,vol;
        printf("Enter any number:");
        scanf("%lf",&r);
        h=20;
        pi=3.14;
        vol=pi*r*r*(h/3);

        printf("The volume of the cone is:%f",vol);

}
