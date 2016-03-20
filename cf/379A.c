#include<stdio.h>

int main()
{
		int a,b;
		scanf("%d%d",&a,&b);
		
		int sum=a;
		while( a > 0 )
		{
				sum+=a/b;
				if( a>b )
						a = a/b + a%b;
				else
						a = a/b;
		}

		printf("%d\n",sum);

		return 0;
}
