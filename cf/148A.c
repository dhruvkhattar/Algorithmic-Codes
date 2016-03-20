#include<stdio.h>

int a[100005];

int main()
{
		int k,l,m,n,d;

		scanf("%d",&k);
		scanf("%d",&l);
		scanf("%d",&m);
		scanf("%d",&n);
		scanf("%d",&d);
		
		int i=1;

		while( k*i <= d )
		{
				a[k*i]=1;
				i++;
		}

		i=1;
		while( l*i <= d )
		{
				a[l*i]=1;
				i++;
		}
		i=1;
		while( n*i <= d )
		{
				a[n*i]=1;
				i++;
		}
		i=1;
		while( m*i <= d )
		{
				a[m*i]=1;
				i++;
		}

		int ans=0;

		for( i=1 ; i<=d ; i++ )
		{
				if( a[i]==1 )
						ans++;
		}

		printf("%d\n",ans);

		return 0;
}
