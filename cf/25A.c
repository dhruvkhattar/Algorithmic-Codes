#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int o,e,ce,co;

		o=e=-1;
		co=ce=0;

		int i;
		for( i=0 ; i<n ; i++ )
		{
				int x;
				scanf("%d",&x);

				if( x%2 == 1 )
				{
						o=i+1;
						co++;
				}
				else
				{
						e=i+1;
						ce++;
				}
		}

		if( co==1 )
				printf("%d\n",o);
		else
				printf("%d\n",e);


		return 0;
}
