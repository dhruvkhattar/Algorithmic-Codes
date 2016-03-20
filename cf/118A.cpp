#include<bits/stdc++.h>
using namespace std;

int main()
{
		char a[102];

		cin>>a;
		int len = strlen(a);

		for( int i=0 ; i<len ; i++ )
		{
				if( a[i]>='A' && a[i]<='Z')
				{
						if( a[i]!='A' && a[i]!='E' && a[i]!='I' && a[i]!='O' && a[i]!='U' && a[i]!='Y')
						{
								char x = a[i]-'A'+'a';
								cout<<"."<<x;
						}
				}
				else if( a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y')
						cout<<"."<<a[i];
		}
				cout<<endl;
		return 0;

}
