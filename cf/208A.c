#include<stdio.h>

char q[202];

int start=0;
int end=0;

int main()
{
		char a[202];

		scanf("%s",a);
		
		int i;
		int flag=0;
		int yo=0;
		for( i=0 ; a[i]!='\0' ; i++ )
		{
				if( a[i]=='W' )
				{
						while( start<end )
						{
								printf("%c",q[start]);
								yo=0;
								start++;
								flag=1;
						}
						start=end=0;
						q[end]=a[i];
						end++;
				}
				else if( end==1 && a[i]=='U' )
				{
						q[end]=a[i];
						end++;
				}
				else if( end==2 && a[i]=='B' )
				{
						q[end]=a[i];
						end=0;
						if( flag==1 && yo==0 )
						{
								printf(" ");
								yo=1;
						}
				}
				else
				{
						while( start<end )
						{
								printf("%c",q[start]);
								start++;
						}
						if( flag==0 )
								flag=1;
						start=end=0;
						printf("%c",a[i]);
								yo=0;
				}
		}
						while( start<end )
						{
								printf("%c",q[start]);
								start++;
						}

		printf("\n");

		return 0;
}
