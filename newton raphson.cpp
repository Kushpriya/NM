#include<stdio.h>
#include<conio.h>
#include<math.h>

float f1(float);
float f2(float);
int main()
{
	float x0,x1,result1,result2,iter,x;
	printf("Enter initial guess:-");
	scanf("%f",&x0);
	printf("\nEnter Tolerance Error:-");
	scanf("%f",&x1);
	printf("\nEnter maximum iteration:-");
	scanf("%f",&iter);
	printf("f(%f) = %f \n",x0,result1);
	for(int i=1;i<iter;i++)
	{
		result1=f1(x0);
		result2=f2(x0);
		x=x0-(result1/result2);
		x0=x;
		printf("X = %f\n",x);
	}
	return 0;
}
float f1(float a)
{
	return 3*a-cos(a)-1;
}
float f2(float b)
{
	return 3+sin(b);
}
