#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int x,y,z;
		x=y=z=0;

		int i;
		for( i=0 ; i<n ; i++ )
		{
				int a,b,c;
				scanf("%d%d%d",&a,&b,&c);
				x+=a;
				y+=b;
				z+=c;
		}

		if( x==0 && y==0 && z==0 )
				printf("YES\n");
		else
				printf("NO\n");

		return 0;
}
