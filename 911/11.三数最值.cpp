//第一种方法： 
#include <stdio.h>
int main()
{
	int a,b,c,max;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		max=a;
		if(a>c)
		{
			max=a;
		}
		else{
			max=c;
		}
	}
	else{
		max=b;
		if(b>c)
		{
			max=b;
		}
		else{
			max=c;
		}	
	}
	printf("%d",max);

}


//第二种方法：
 #include<stdio.h>
  int main() 
  {
      int a, b, c, max;
      scanf("%d%d%d", &a, &b, &c);
      if (a > b)
      {
	     max = a;
	  } 
      else{
      	max = b;
	  }
       if (c > max)
       {
       	 max = c;
	   }
         printf("%d", max); 
     }
     
	 
	 
	 
	 //第三种方法： 
	 #include <sdio.h>
	 int main()
	 {
	 	 int a, b, c, max;
         scanf("%d%d%d", &a, &b, &c);
         max = a;
         if (b > max)
         {
           max = b;
         }
         if (c > max)
         {
           max = c;
         }
		   printf("%d", max); 
	  } 
	  
	  
	  //第四种方法：
	  #include <stdio.h>
	  int main()
	  {
	  	 int a, b, c, max;
         scanf("%d%d%d", &a, &b, &c);
         if (a >= b && a >= c)
         {
             max = a;	
		 }
         if (b >= a && b >= c)
         {
             max = b;
         }
         if (c >= a && c >= b)
         {
             max = c;
			 }
         printf("%d", max); 
	   } 
