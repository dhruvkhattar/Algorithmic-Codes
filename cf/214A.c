#include<stdio.h>

int b[1003];

int main()
{

		int n,m;

		scanf("%d%d",&n,&m);
		
		int i;

		for( i=0 ; i*i<=n ; i++ )
				b[i] = n - i*i;

		int ans=0;
		int j;
		for ( j=0 ; j<i ; j++ )
		{
				if( b[j]*b[j] + j == m)
						ans++;
		}

		printf("%d\n",ans);
		return 0;
}
