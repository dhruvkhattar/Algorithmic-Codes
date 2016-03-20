#include<bits/stdc++.h>
using namespace std;

int main()
{
		int n;
		cin>>n;
		int ans=0;

		while( n-- )
		{
				char a[4];
				cin>>a;
				if( a[0]=='+' || a[1]=='+' || a[2]=='+' )
						ans++;
				else		
						ans--;
		}

		cout<<ans<<endl;

		return 0;
}
