#include<stdio.h>

int a[1003];
int main()
{
		int n,m,k;
		scanf("%d%d%d",&n,&m,&k);

		int i;
		for( i=0 ; i<m ; i++ )
				scanf("%d",&a[i]);

		int x;
		scanf("%d",&x);

		int ans=0;
		for( i=0 ; i<m ; i++ )
		{
				a[i]=a[i]^x;
				int j=n;
				int count=0;
				while( j-- )
				{
						if( a[i]%2 == 1 )
								count++;
						a[i]=a[i]/2;
				}
						if( count <= k )
								ans++;
		}

		printf("%d\n",ans);


		return 0;
}
