#include<stdio.h>

int main()
{
		char a[102];
		int c1,c2,c3,ct;
		c1=c2=c3=ct=0;

		scanf("%s",a);
		
		int i;
		for( i=0 ; a[i]!='\0' ; i++ )
				if(a[i]=='1')
						c1++;
				else if ( a[i]=='2' )
						c2++;
				else if ( a[i]=='3' )
						c3++;

		ct=c1+c2+c3;

		for( i=1 ; i<c1 ; i++ )
				printf("1+");
		if( ct == c1 )
				printf("1\n");
		else if( c1!=0)
				printf("1+");
		for( i=1 ; i<c2 ; i++ )
				printf("2+");
		if( c3==0 && c2!=0)
				printf("2\n");
		else if (c2!=0)
				printf("2+");
		for( i=1 ; i<c3 ; i++ )
				printf("3+");
		if( c3 !=0 )
				printf("3\n");

		return 0;
}
