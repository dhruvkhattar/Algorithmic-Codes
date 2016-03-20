#include<stdio.h>
#include<string.h>
#include<math.h>
int pw(int number,int pwer)
{
		if(pwer==0)
				return 1;
		else
		{
				int t = pw(number*number,pwer/2);
				if(pwer%2==1)
						return t*number;
				else
						return t;
		}

}
int main()
{
		int n,yo;
		scanf("%d",&n);
		char z[27];
		char temp[1000006];
		
		int m;
		for( m=0 ; m<26 ; m++ )
				z[m]='A'+m;
		while(n--)
		{
				char a[1000006];
				scanf("%s",a);
				int len=strlen(a);
				int re;
				int flag1,flag2;
				flag1=flag2=0;
				if(a[0]=='R' && a[1]>='1' && a[1]<='9')
						flag1=1;
				for( re=2 ; re<len && flag1==1; re++ )
						if(a[re]=='C')
								flag2=1;


				if( flag1==0 || flag2==0 )
				{
						int x,j;
						x=0;;
						int i=0;
						while( a[i]>='A' && a[i]<='Z' )
								i++;

						for( j=i-1 ; j>=0 ; j-- )
						{
								x+=pw(26,i-j-1)*(a[j]-'A'+1);
						}

						printf("R");
						for(;i<len;i++)
								printf("%c",a[i]);
						printf("C%d\n",x);
				}
				else
				{
						int i=1;
						int ctr=0;
						while( a[i]!='C' )
								i++;

						int x=0;
						int j;
						for( j=len-1 ; j>i ; j-- )
						{

								x+=pw(10,len-1-j)*(a[j]-'0');
						}


						while( (x-1)/26 > 0 )
						{
								temp[ctr]=(x-1)%26;
								ctr++;
								x=(x-1)/26;
						}
								temp[ctr]=(x-1)%26;
						for( ; ctr>=0 ; ctr--)
								printf("%c",z[temp[ctr]]);
						for( j=1 ; j<i ; j++ )
								printf("%c",a[j]);
						printf("\n");

				}
		}
		return 0;
}
