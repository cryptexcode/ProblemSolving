
#include<stdio.h>
#include<math.h>
#define max 1000000
char prime[max+1];
void sieve()
{
    int i,j,k=0;
    for(i=2; i<max; i++)prime[i]=1;
    for(i=2; i<=sqrt(max);)
    {
        for(j=i*2; j<=max; j+=i)
        {
            prime[j]=0;
        }
        i++;
        for(; !prime[i]; i++);
    }
}
int main()
{
    sieve();
    int n,i,p,a,b;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        p=0;
        for(i=2; i<=n; i++)
        {
            if(prime[i]==1 && prime[n-i]==1)
            {
                p++;
                a=i,b=n-i;
                break;
            }
        }
        if(p==0)printf("%d:\nNO WAY!\n",n);
        else printf("%d:\n%d+%d\n",n,a,b);
    }
    return 0;
}

