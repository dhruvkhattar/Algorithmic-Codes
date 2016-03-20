#include<stdio.h>

int main()
{
		int n,m,a;

		scanf("%d%d%d",&n,&m,&a);

		long long int ans;

		if( n%a == 0 )
				ans = n/a ;
		else
				ans = n/a + 1 ;

		if( m%a == 0 )
				ans *=  m/a ;
		else
				ans *= m/a + 1 ;

		printf("%lld\n",ans);


		return 0;
}
