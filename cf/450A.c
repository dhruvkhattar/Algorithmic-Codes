#include<stdio.h>

int main()
{
		int n,m;

		scanf("%d%d",&n,&m);

		int i;
		int a[102];
		int max=0;
		int maxa=0;
		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&a[i]);
				if( maxa <= a[i]/m  && a[i]%m==0 )
				{
						max=i;
						maxa=a[i]/m;
				}
				else if( maxa <= a[i]/m +1  && a[i]%m!=0 )
				{
						max=i;		
						maxa=a[i]/m+1;
				}
		}

		printf("%d\n",max+1);
		return 0;
}
