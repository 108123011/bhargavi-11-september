#include<stdio.h>
#include<math.h>
int main()
{
	int b,hra,da,ta,r,g;
	scanf("%d %d",&b,&r);
	da=16*b/100;
	ta=10*b/100;
	if(r==1)
	{
		hra=24*b/100;
		g=b+hra+da+ta;
		printf("%d",g);
	}
    else
    {
    	hra=15*b/100;
    	g=b+hra+da+ta;
    	printf("%d",g);
    }  
    return 0;
}
   
   
