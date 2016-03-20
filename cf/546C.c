#include<stdio.h>

int q1[1000];
int q2[1000];
int head1=0;
int tail1=0;
int head2=0;
int tail2=0;

int main()
{

		int n;
		scanf("%d",&n);

		int k1,k2;
		scanf("%d",&k1);

		while(k1--)
		{
				int temp;
				scanf("%d",&temp);
				q1[tail1++]=temp;
		}

		scanf("%d",&k2);

		while(k2--)
		{
				int temp;
				scanf("%d",&temp);
				q2[tail2++]=temp;
		}

		int count=0;
		int flag=0;

		while(tail1!=head1 && tail2!=head2)
		{
				int temp1=q1[head1++];
				int temp2=q2[head2++];

				if( temp1>temp2 )
				{
						q1[tail1++]=temp2;
						q1[tail1++]=temp1;
				}
				else
				{
						q2[tail2++]=temp1;
						q2[tail2++]=temp2;
				}
				count++;
				if(count>1000)
				{
						flag=1;
						break;
				}
		}
		if(flag==1)
				printf("-1\n");
		else
				if(tail1==head1)
						printf("%d 2\n",count);
				else		
						printf("%d 1\n",count);

		return 0;
}
