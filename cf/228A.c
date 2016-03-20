#include<stdio.h>

int main()
{

		int a[5];

		int i;
		int ans=0;
		for( i=0 ; i<4 ; i++ )
		{
				scanf("%d",&a[i]);
				int j=i-1;
				while( j>=0)
				{
						if(a[j]==a[i])
								break;
						j--;
				}
				if(j==-1)
						ans++;
		}

		printf("%d\n",4-ans);

		return 0;
}
