#include<stdio.h>

char q[100055];
int end=0;

int main()
{
		char a[100055];
		scanf("%s",a);

		int i,flag1,flag2;
		flag1=flag2=0;
		end=0;

		for( i=0 ; a[i]!='\0' ; i++ )
		{
				if( flag1==0 && a[i]=='A' && (end==0 || q[end-1]=='A') )
				{
								end=0;
								q[end]='A';
								end++;
				}
				else if( flag2==0 && flag1==1 && a[i]=='B' && ( end==0 || q[end-1]=='B'))
				{
								end=0;
								q[end]='B';
								end++;
				}
				else if( flag1==0 && a[i]=='B' && q[end-1]=='A' )
				{
						flag1=1;
						end=0;
				}
				else if( flag2==0 && flag1==1 && a[i]=='A' && q[end-1]=='B' )
				{
						flag2=1;
						end=0;
				}
				else
						end=0;
				if( flag1==1 && flag2==1 )
				{
						printf("YES\n");
						return 0;
				}
		}

		flag1=flag2=end=0;

		for( i=0 ; a[i]!='\0' ; i++ )
		{
				if( flag1==0 && flag2==1 && a[i]=='A' && (end==0 || q[end-1]=='A') )
				{
								end=0;
								q[end]='A';
								end++;
				}
				else if( flag2==0 && a[i]=='B' && ( end==0 || q[end-1]=='B'))
				{
								end=0;
								q[end]='B';
								end++;
				}
				else if( flag1==0  && flag2==1 && a[i]=='B' && q[end-1]=='A' )
				{
						flag1=1;
						end=0;
				}
				else if( flag2==0 && a[i]=='A' && q[end-1]=='B' )
				{
						flag2=1;
						end=0;
				}
				else
						end=0;
				if( flag1==1 && flag2==1 )
				{
						printf("YES\n");
						return 0;
				}
		}

		printf("NO\n");

		return 0;
}
