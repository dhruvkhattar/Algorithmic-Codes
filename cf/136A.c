#include<stdio.h>

int a[102];
int b[102];

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		for( i=1 ; i<=n ; i++ )
		{
				scanf("%d",&a[i]);
				b[a[i]]=i;
		}

		for( i=1 ; i<=n ; i++ )
				printf("%d ",b[i]);

		printf("\n");

		return 0;

}
