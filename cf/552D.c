#include<stdio.h>

int main()
{
		int n;
		int a[2003][2];
		scanf("%d",&n);
		int i;
		for(i=0 ; i<n ; i++)
		{
				scanf("%d%d",&a[i][0],&a[i][1]);
		}

		int j,k;
		long long ans=0;

		for( i=0 ; i<n-2 ; i++)
				for( j=i+1 ; j<n-1 ; j++)
						for( k=j+1 ; k<n ; k++)
								if( a[k][1]*a[j][0] + a[j][1]*a[i][0] + a[i][1]*a[k][0] - a[k][1]*a[i][0] -a[i][1]*a[j][0] -a[j][1]*a[k][0]!= 0)
										ans++;

		printf("%lld\n",ans);

		return 0;
}
