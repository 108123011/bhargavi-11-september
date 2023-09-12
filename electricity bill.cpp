#include<stdio.h>
#include<math.h>
int main()
{
	int u;
	printf(" enter the value of number of units");
	scanf("%d",&u);
    if(u>=0 && u<=100)
        printf("%d",u*2);
    else if(u>100 && u<=200)
        printf("%f",u*3.5);
    else
        printf("%d",u*5);
    return 0;
}
