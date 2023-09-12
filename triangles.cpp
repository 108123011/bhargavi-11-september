#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter the value of sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&a==c&&b==c)
	   printf("the triangle is equilateral");
	else if(a==b||b==c||c==a)
	   printf("the triangle is isosceles");
	else
	   printf("the triangle is scalene");
	return 0;
}
