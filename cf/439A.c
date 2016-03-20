#include<stdio.h>

int main()
{
		int n,d;

		int t[102];

		scanf("%d%d",&n,&d);

		int i;
		int sum=0;

		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&t[i]);
				sum+=t[i];
		}
		if( sum + 10*(n-1) >d )
				printf("-1\n");
		else
				printf("%d\n",(d-sum)/5);

		return 0;
}
