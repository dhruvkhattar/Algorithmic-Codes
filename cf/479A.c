#include<stdio.h>

int main()
{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);

		int x=a+b+c;
		int max=x;

		int y=a*b*c;
		if( max<y )
				max=y;

		int z=(a+b)*c;
		if( max<z )
				max=z;

		int u=a*b+c;
		if( max<u )
				max=u;

		int v=(c+b)*a;
		if( max<v )
				max=v;

		int w=a+b*c;
		if( max<w )
				max=w;


		printf("%d\n",max);

		return 0;
}
