#include<stdio.h>

int main()
{
		int n,m;
		scanf("%d%d",&n,&m);

		
		int count=1;

		while( m>1 && n>1)
		{
				m--;
				n--;
				count++;
		}
		if( count%2 == 0 )
				printf("Malvika\n");
		else
				printf("Akshat\n");
		
		return 0;
}
