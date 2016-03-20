#include<iostream>
#include<string.h>
using namespace std;

int main()
{
		int n;
		cin>>n;

		while( n-- )
		{
				char a[102];
				cin>>a;
				int len=strlen(a);
				if( len>10 )
						cout<<a[0]<<len-2<<a[len-1]<<endl;
				else
						cout<<a<<endl;
		}

		return 0;

}
