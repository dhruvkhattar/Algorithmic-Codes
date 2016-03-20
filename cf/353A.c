#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int count=0;
		int sx=0;
		int sy=0;

		int i;
		for( i=0 ; i<n ; i++ )
		{
				int x,y;
				scanf("%d%d",&x,&y);
				sx+=x;
				sy+=y;
				if( x%2==1 && y%2==0 )
						count++;
				else if( x%2==0 && y%2==1 )
						count++;
		}
		if(sx%2==0 && sy%2==0 )
				printf("0\n");
		else if(sx%2==1 && sy%2==1 && count>0)
				printf("1\n");
		else
				printf("-1\n");
		return 0;
}
