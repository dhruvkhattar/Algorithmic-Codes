#include<stdio.h>

typedef long long int ll;

int main()
{

		ll k,n,w;

		scanf("%lld%lld%lld",&k,&w,&n);
		ll cost;
		cost = k*(n*(n+1)/2);
		if(cost>w)
				printf("%lld\n",cost-w);
		else
				printf("0\n");
		return 0;
}

