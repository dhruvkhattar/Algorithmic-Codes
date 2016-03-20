#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		if(n<3)
				printf("-1\n");
		else
		{
				int i;
				for( i=n ; i>0 ; i-- )
						printf("%d ",i);
				printf("\n");
		}

		return 0;
}
