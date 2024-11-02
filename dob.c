#include "stdio.h"
main()
{
        int cd,cm,cy;
        int bd,bm,by;
        int td,tm,ty;
        printf("Enter current date");
        scanf("%d%d%d",&cd,&cm,&cy);
        printf("Enter your birth year");
        scanf("%d%d%d",&bd,&bm,&by);


        if(cd >= bd)
                td=cd-bd;
        else
        {
                if(cm==1||cm==3||cm==5||cm==7||cm==8||cm==10||cm==12)
                {
                        cd=cd+31;
                        cm=cm-1;
                        td=cd-bd;
                }
                else if(cm==2)
                {
                        if(cy%4==0)
                                cd=cd+29;
                        else
                                cd=cd+28;
                        cm=cm-1;
                        td=cd-bd;
                }
                else
                {
                        cd += 30;
                        cm --;
                        td = cd- bd;
                }
        }
        if(cm>=bm)
                tm=cm-bm;
        else
        {
                cm=cm+12;
                cy=cy-1;
                tm=cm-bm;
        }
        ty=cy-by;
        printf("your age now: %d-%d-%d",ty,tm,td);
}
