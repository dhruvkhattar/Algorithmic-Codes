#include<stdio.h>

int lcm(int x,int y)
{
		int i;
		for(i=x ;  ; i+=x)
				if(i%y==0)
						return i;
}
int main()
{
		int a,b,x,y,ans;
		ans=0;

		scanf("%d%d%d%d",&x,&y,&a,&b);
		
		int yo=lcm(x,y);
		int i;

		if( yo>b )
				printf("0\n");
		else if( a<yo )
				printf("%d\n",b/yo);
		else if(a%yo==0)
				printf("%d\n",b/yo-a/yo+1);
		else 
				printf("%d\n",b/yo-a/yo);
						


		return 0;
}
