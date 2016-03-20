#include<stdio.h>

long long power(long long x)
{
		long long ans=1;
		long long i;
		for( i=0 ; i<x ; i++ )
				ans*=10;
		return ans;
}

int main()
{
		long long n;
		scanf("%lld",&n);

		if( n>=10)
		{
				long long x=n;
				long long a[20];
				long long b[20];
				b[0]=9;
				b[1]=90;
				b[2]=900;
				b[3]=9000;
				b[4]=90000;
				b[5]=900000;
				b[6]=9000000;
				b[7]=90000000;
				b[8]=900000000;
				b[9]=9000000000;
				b[10]=90000000000;
				long long ans=0;
				long long count=0;
				while( n )
				{
						a[count++]=n%10;
						n=n/10;
				}

				long long i;
				for( i=0 ; i<count-1 ; i++ )
				{
						ans=(long long)ans+(long long)(i+1)*b[i];
				}
				ans=ans+count*(x-power(count-1)+1);

				printf("%lld\n",ans);
		}
		else
				printf("%lld\n",n);
		return 0;
}
