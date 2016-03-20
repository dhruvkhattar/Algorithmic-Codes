#include<stdio.h>

int main()
{
		int c,r;

		scanf("%d%d",&r,&c);

		char a[15][15];

		int i;
		for( i=0 ; i<r ; i++ )
				scanf("%s",a[i]);


		int row[15]={0};
		int column[15]={0};

		int j;
		int cr,cc;
		cc=cr=0;
		for( i=0 ; i<r ; i++ )
				for( j=0 ; j<c ; j++ )
						if( a[i][j]=='S' )
						{
								if( row[i]==0)
								{
										row[i]=1;
										cr++;
								}
								if( column[j]==0 )
								{
										column[j]=1;
										cc++;
								}
						}

		printf("%d\n",(r-cr)*c+(c-cc)*r-(c-cc)*(r-cr));

		return 0;
}
