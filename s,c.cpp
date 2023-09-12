#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r,n,s,c;
	scanf("%d %d %d %d",&p,&t,&r,&n);
	s=p*t*r/100;
	c=p*pow((1+r/t),n*t);
	printf("%d %d",s,c);
	return 0;
} 
