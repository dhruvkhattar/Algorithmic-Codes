#include<stdio.h>

int fact(int a)
{
		if(a<=1)
				return 1;
		return a*fact(a-1);
}

int main()
{
		char a[20];
		char b[20];

		scanf("%s",a);
		scanf("%s",b);

		int i;
		int cor=0;
		int wr=0;
		int c=0;

		for( i=0 ; a[i]!='\0' ; i++ )
		{
				if( a[i]=='+' )
						cor++;
				else
						cor--;
				if( b[i]=='+' )
						wr++;
				else if(b[i]=='-')
						wr--;
				else
						c++;
		}

		double x;

		if( abs(cor-wr) > c ||( abs(cor-wr)%2==0 && c%2==1) || ( abs(cor-wr)%2==1 && c%2==0))
		{
				x=0;	
				printf("%0.12f\n",x);
		}
		else
		{
				x=(double)(fact(c)/((double)fact((abs(cor-wr)+c)/2)*fact((c-abs(cor-wr))/2))/(1<<c));
				printf("%0.12f\n",x);
		}



		return 0;
}
