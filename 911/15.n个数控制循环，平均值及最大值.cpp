#include <stdio.h>
int main()
{
	int i,N,n,avnum,sum=0,max=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&n);
		if(n>max)
		{
			max=n;
		}
		sum+=n;
	}
	sum+=N;
	sum/=N;
	avnum=sum;
	printf("���ֵ��%d��ƽ��ֵ��%d",max,avnum);
}
