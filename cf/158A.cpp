#include<iostream>
using namespace std;

int a[60];

int main()
{
		int n,k;
		cin>>n>>k;
		
		int count=0;
		for( int i=0 ; i<n ; i++ )
				cin>>a[i];

		for( int i=0 ; i<n ; i++ )
		{
				if( a[i]>0 && a[i]>=a[k-1] )
						count++;
		}

		cout<<count<<endl;
		return 0;
}
