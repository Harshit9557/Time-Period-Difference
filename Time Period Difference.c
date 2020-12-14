#include<stdio.h>
struct timeperiod
{
    int hours,minutes,seconds;
};
int main()
{
    int i,dh=0,dm=0,ds=0;
    printf("Enter the stop time first :-\n");
    struct timeperiod tp[2];
    for(i=0;i<2;i++)
    {
        scanf("%d\n%d\n%d",&tp[i].hours,&tp[i].minutes,&tp[i].seconds);
    }
    if(tp[0].seconds<tp[1].seconds)
    {
        ds=(60-tp[1].seconds)+tp[0].seconds;
        if(tp[1].minutes==tp[0].minutes)
        {
            dm=59;
            dh=tp[0].hours-tp[1].hours-1;
        }
        else if(tp[0].minutes<tp[1].minutes)
        {
            dm=(60-tp[1].minutes)+tp[0].minutes-1;
            dh=tp[0].hours-tp[1].hours-1;
        }
        else
        {
            dm=tp[0].minutes-tp[1].minutes-1;
            dh=tp[0].hours-tp[1].hours-1;
        }
    }
    else
    {
        ds=tp[0].seconds-tp[1].seconds;
        if(tp[0].minutes<tp[1].minutes)
        {
            dm=(60-tp[1].minutes)+tp[0].minutes;
            dh=tp[0].hours-tp[1].hours-1;
        }
        else
        {
            dm=tp[0].minutes-tp[1].minutes;
            dh=tp[0].hours-tp[1].hours;
        }
    }
    printf("Difference = %d hours %d minutes %d seconds",dh,dm,ds);
    return 0;
}
