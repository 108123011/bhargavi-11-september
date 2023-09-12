#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,percentage;
	printf("enter the marks of five subjects");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	percentage=(a+b+c+d+e)/5;
	if(percentage>=90)
	    printf("grade A");
	else if(percentage>=80&&percentage<90)
	    printf("grade B");
    else if(percentage>=70&&percentage<80)
        printf("grade C");
    else if(percentage>=60&&percentage<70)
        printf("grade D");
    else if(percentage>=40&&percentage<60)
        printf("grade E");
    else
        printf("grade F");
    return 0;
}
	    
	
	


