#include<stdio.h>

int main()
{
		int k;
		int l;

		scanf("%d%d",&k,&l);
		long long i=k;
		int c=0;

		while( i<=l )
		{
				if(i==l)
				{
						printf("YES\n%d\n",c);
						return 0;
				}
				c++;
				i=i*k;
		}
		printf("NO\n");

		return 0;
}
