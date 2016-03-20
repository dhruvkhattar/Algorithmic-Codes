#include<stdio.h>

int max(a,b)
{
		if(a>b)
				return a;
		return b;
}

int main()
{
		int n,a,b;

		scanf("%d%d%d",&n,&a,&b);

		printf("%d\n",n-max(n-b,a+1)+1);

		return 0;
}
