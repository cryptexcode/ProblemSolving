
#include<stdio.h>
int main()
{
    long double sum,ab,avab;
    int mark[1000],n,cas;
    while(scanf("%d",&cas)==1)
    {
        for(int i=1; i<=cas; i++)
        {
            float avrg=0;
            sum=0;
            ab=0;
            scanf("%d",&n);
            for(int j=1; j<=n; j++)
            {
                scanf("%d",&mark[j]);
                sum+=mark[j];
            }
            avrg=sum/n;
            for(int k=1; k<=n; k++)
            {
                if(mark[k]>avrg) ab++;
            }
            avab=(ab/n)*100;
            printf("%.3Lf%c\n",avab,37);
        }
    }
    return 0;
}
