#include<stdio.h>

int main()
{
		int n,m;

		scanf("%d%d",&n,&m);

		if( n < m )
		{
				printf("-1\n");
				return 0;
		}

		int x = n/2 + n%2;

		while(1)
		{
				if( x%m == 0 )
				{
						printf("%d\n",x);
						return 0;
				}

				x += 1;
		}

		printf("-1\n");

		return 0;
}
