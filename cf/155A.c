#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);
		
		int min,max,x;
		scanf("%d",&x);
		
		min=max=x;

		int ans=0;
		int i;

		for( i=0 ; i<n-1 ; i++ )
		{
				scanf("%d",&x);
				if( x>max ) 
				{
						ans++;
						max=x;
				}
				if( x<min )
				{
						ans++;
						min=x;
				}
		}

		printf("%d\n",ans);
		return 0;
}
