#include<stdio.h>

int main()
{
		int n,m;
		scanf("%d%d",&n,&m);

		int i=1;

		while( n )
		{
				n--;
				if( i%m == 0 )
						n++;
				i++;
		}

		printf("%d\n",i-1);
}
