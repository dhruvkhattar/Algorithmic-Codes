#include<stdio.h>

int main()
{
		int n,k;
		scanf("%d%d",&n,&k);

		int sum=0;

		int i;

		for( i=0 ; i< n ; i++ )
		{
				int x;
				scanf("%d",&x);
				sum+=x;
		}

		if( sum < 0 )
		{
				sum=-sum;
				if(sum%k==0)
						printf("%d\n",sum/k);
				else
						printf("%d\n",sum/k+1);
		}
		else 
		{
				if(sum%k==0)
						printf("%d\n",sum/k);
				else
						printf("%d\n",sum/k+1);
		}

		return 0;
}
