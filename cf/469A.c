#include<stdio.h>

int a[102];

int main()
{
		int n;
		scanf("%d",&n);

		int p;
		scanf("%d",&p);

		int i;

		for( i=0 ; i<p ; i++ )
		{
				int x;
				scanf("%d",&x);
				a[x]++;
		}
		
		int q;
		scanf("%d",&q);

		for( i=0 ; i<q ; i++ )
		{
				int x;
				scanf("%d",&x);
				a[x]++;
		}

		for( i=1 ; i<=n ; i++ )
				if( a[i]==0 )
				{
						printf("Oh, my keyboard!\n");
						return 0;
				}
		printf("I become the guy.\n");

		return 0;
}
