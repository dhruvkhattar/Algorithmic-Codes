#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		double sum=0;

		for( i=0 ; i<n ; i++ )
		{
				int x;
				scanf("%d",&x);
				sum += x;
		}

		printf("%.12lf\n",sum/n);

		return 0;
}
