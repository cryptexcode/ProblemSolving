
#include<stdio.h>
#include<string.h>
int main()
{
    char num[50];
    long int n,len,i,sum;
    while(gets(num))
    {
        if(num[0]==48) break;
        sum=0;
        len=strlen(num);
        for(i=0; i<len; i++)
        {
            sum+=num[i]-48;
        }
        while(sum>9)
        {
            n=sum;
            sum=0;
            while(n>0)
            {
                sum+=n%10;
                n=n/10;
            }
        }
        printf("%ld\n",sum);
    }
    return 0;
}
