#include<stdio.h>

int main()
{

		int t;

		scanf("%d",&t);

		while( t-- )
		{
				int n;
				scanf("%d",&n);
				int c1=0;
				int c0=0;

				while( n-- )
				{
						int x;
						scanf("%d",&x);
						if(x == 1)
								c1++;
						else
								c0++;
				}
				if(c1%2!=0)
						printf("%d\n",c1);
				else
						printf("%d\n",c0);
		}

		return 0;
}
