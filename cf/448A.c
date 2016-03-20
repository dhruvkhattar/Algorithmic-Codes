#include<stdio.h>

int main()
{
		int a1,a2,a3,b1,b2,b3;

		scanf("%d%d%d",&a1,&a2,&a3);
		scanf("%d%d%d",&b1,&b2,&b3);

		int a=a1+a2+a3;
		int b=b1+b2+b3;

		int n;
		scanf("%d",&n);

		if( a%5==0 )
				n=n-a/5;
		else
				n=n-1-a/5;

		if( b%10==0 )
				n=n-b/10;
		else
				n=n-1-b/10;

		if( n>=0 )
				printf("YES\n");
		else
				printf("NO\n");

		return 0;
}
