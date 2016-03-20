#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		int a[5003];
		int x[5003]={0};
		int y[5003]={0};
		int z[5003]={0};
		int cx,cy,cz;
		cx=cy=cz=0;
		for( i=1 ; i<=n ; i++ )
		{
				scanf("%d",&a[i]);
				if( a[i]==1 )
						x[cx++]=i;
				else if( a[i]==2 )
						y[cy++]=i;
				else
						z[cz++]=i;
		}

		int min=cx;
		if( min > cy )
		{
				min=cy;
		}
		if( min > cz )
				min=cz;
	
		printf("%d\n",min);
		for( i=0 ; i<min ; i++ )
		{
				printf("%d %d %d\n",x[i],y[i],z[i]);
		}


		return 0;
}
