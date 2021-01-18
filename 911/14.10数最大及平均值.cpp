#include <stdio.h>
int main()
{
	int i,num,sum=0,max=0,average_num;
	for(i=0;i<10;i++)
	{
	scanf("%d",&num);
    sum+=num;
    if(num>max)
    {
    	max=num;
	}
	}
	sum/=10;
	average_num=sum;
	printf("最大值：%d，平均值：%d",max,average_num);
}
