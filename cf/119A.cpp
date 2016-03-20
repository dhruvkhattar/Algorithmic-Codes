#include<bits/stdc++.h>

using namespace std;

int gcd(int x,int y)
{
		int z=x%y;

		while(z!=0)
		{
				x=y;
				y=z;
				z=x%y;
		}
		return y;
}

int main()
{
		int a,b,n;
		cin>>a>>b>>n;

		int i=1;

		while(1)
		{
				if( n==0 )
				{
						printf("1\n");
						return 0;
				}
				if( gcd(a,n)>n )
				{
						printf("1\n");
						return 0;
				}
				n=n-gcd(a,n);
				if( n==0 )
				{
						printf("0\n");
						return 0;
				}
				if( gcd(b,n)>n || n==0)
				{
						printf("0\n");
						return 0;
				}
				n=n-gcd(b,n);
				i++;
		}
}
