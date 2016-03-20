#include<stdio.h>

int main()
{
		int a,b,s;

		scanf("%d%d%d",&a,&b,&s);

		int sum=0;

		if( a > 0 )
				sum+=a;
		else
				sum+=-a;

		if( b > 0 )
				sum+=b;
		else
				sum+=-b;

		if( sum > s )
				printf("NO\n");
		else if( (s-sum)%2 == 1)
				printf("NO\n");
		else		
				printf("YES\n");

		return 0;
}
