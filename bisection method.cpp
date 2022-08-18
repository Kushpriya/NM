#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return(x*x*x+x*x+x+7);
}
int main()
{
	float a, b,c,e;
	int max;
	printf("Enter a value of a:-");
	scanf("%f",&a);
	printf("\nEnter a value of b:-");
	scanf("%f",&b);
	printf("\nEnter a value of allowed error:-");
	scanf("%f",&e);
	printf("\nEnter a value of maximum iteration:-");
	scanf("%d",&max);
	if(f(a)*f(b)<=0)
	{
	int iteration=1;
	{
		printf("iteration\t a\t\t b\t\t c\t\t f(c)\t\t |a-b|\n");
	}
	do
	{
		{
		c=(a+b)/2;
		printf("%d\t %f\t\t %f\t\t %f\t\t %f\t\t %f",iteration,a,b,c,f(c),fabs(a-b));
	    }
		if(f(a)*f(b)>0)
		{
			a=c;
		}
	    else if(f(a)*f(b)<0)
		{
			b=c;
		}
		iteration++;
	}
	while(fabs(a-b)>=e&&iteration<=max);
	}
	else
	{
		printf("sorry!!!the root does not exist.");
	//	goto a;
	}
	getch();
}
