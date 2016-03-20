#include<stdio.h>

int min(int a,int b)
{
		if( a < b )
				return a;
		return b;
}

int main()
{
		char a[100005];
		char b[100005];
		char c[100005];

		scanf("%s",a);
		scanf("%s",b);
		scanf("%s",c);

		int i;

		int ca[26]={0};
		int cb[26]={0};
		int cc[26]={0};
		int countb=999999;
		int countc=999999;

		for( i=0 ; a[i]!='\0' ; i++ )
				ca[a[i]-'a']++;
		for( i=0 ; b[i]!='\0' ; i++ )
				cb[b[i]-'a']++;
		for( i=0 ; c[i]!='\0' ; i++ )
				cc[c[i]-'a']++;


		for( i=0 ; i<26 ; i++ )
		{
				if( cb[i]!=0 )
						countb=min(countb,ca[i]/cb[i]);
				if( cc[i]!=0 )
						countc=min(countc,ca[i]/cc[i]);
		}

		while( countb>0 || countc>0 )
		{
				if( countb > countc )
				{
						int j;
						printf("%s",b);
						for( j=0 ; j<26 ; j++ )
								ca[j]=ca[j]-cb[j];
				}
				else
				{
						int j;
						printf("%s",c);
						for( j=0 ; j<26 ; j++ )
								ca[j]-=cc[j];
				}
				countb=999999;
				countc=999999;
				for( i=0 ; i<26 ; i++ )
				{
						if( cb[i]!=0 )
								countb=min(countb,ca[i]/cb[i]);
						if( cc[i]!=0 )
								countc=min(countc,ca[i]/cc[i]);
				}
		}


		for( i=0 ; i<26 ; i++ )
		{
				while(ca[i])
				{
						printf("%c",i+'a');
						ca[i]--;
				}
		}
		printf("\n");

		return 0;
}
