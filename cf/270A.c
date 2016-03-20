#include<stdio.h>

int main()
{
		int t;
		scanf("%d",&t);

		while( t-- )
		{
				int a;
				scanf("%d",&a);

				int x=180-a;

				if( 360%x==0 )
						printf("YES\n");
				else
						printf("NO\n");
		}

		return 0;
}
