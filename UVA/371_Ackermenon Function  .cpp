
#include<stdio.h>
#include<math.h>
int main()
{
    long double num1,num2,maxnum,maxlen,a,i,j,k,max;
    while(scanf("%Lf%Lf",&num1,&num2)==2)
    {
        if(num1==0 && num2==0) break;
        if(num1>num2)
        {
            max=num1;
            num1=num2;
            num2=max;
        }
        maxlen=0;
        for(i=num1; i<=num2; i++)
        {
            j=i;
            a=i;
            k=1;
            for(;;)
            {
                if (fmodl(j,2)==0) j=j/2;
                else if (fmodl(j,2)==1) j=3*j+1;
                if(j==1) break;
                k++;
            }
            if(k>maxlen)
            {
                maxlen=k;
                maxnum=a;
            }
        }
        printf("Between %.0Lf and %.0Lf, %.0Lf generates the longest sequence of %.0Lf values.\n",num1,num2,maxnum,maxlen);
    }
    return 0;
}


