#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		if( n>=0 )
				printf("%d\n",n);
		else
		{
				int x = n/10;
				int yo = n%10;

				int z = n/100;

				z= 10*z + yo;

				if( z > x)
						printf("%d\n",z);
				else
						printf("%d\n",x);
		}
		return 0;
}
