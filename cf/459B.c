#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		long long i;
		int a[200005];
		int min=1000000009;
		int max=0;
		long long cmin,cmax;
		cmin=cmax=0;
		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&a[i]);
				if( a[i]>max )
				{
						max=a[i];
						cmax=1;
				}
				else if( a[i]==max )
						cmax++;
				if( min>a[i] )
				{
						min=a[i];
						cmin=1;
				}
				else if( a[i]==min )
						cmin++;
		}
		
		long long ans=1;
		
		if( max==min )
				printf("%d %lld\n",max-min,((cmin-1)*cmin)/2);
		else
				printf("%d %lld\n",max-min,cmin*cmax);

		return 0;
}
