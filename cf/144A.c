#include<stdio.h>

int a[102];

int main()
{
		int n;
		scanf("%d",&n);

		int i;

		int max,min;
		max=min=0;
		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&a[i]);
				if( a[i] > a[max] )
						max=i;
				if( a[i] <= a[min] )
						min=i;
		}
		
		if( min<max )
				printf("%d\n",max+n-min-2);
		else
				printf("%d\n",max+n-min-1);

		return 0;

}
