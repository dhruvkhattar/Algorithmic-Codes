#include<stdio.h>

int main()
{
		int n,m,a,b;

		scanf("%d%d%d%d",&n,&m,&a,&b);

		int x=n*a;

		int y=(n/m)*b + (n%m)*a ;
		
		int z=(n/m)*b+b;

		if( x <= y && x <= z )
				printf("%d\n",x);
		else if( y <= x && y <= z )
				printf("%d\n",y);
		else
				printf("%d\n",z);

		return 0;
}
