/*1. Start

2. Read number of data (n)

3. Read data Xi and Yi for i=1 ton n

4. Read value of independent variables say xp
   whose corresponding value of dependent say yp is to be determined.
   
5. Initialize: yp = 0

6. For i = 1 to n
     Set p = 1
     For j =1 to n
       If i ? j then 
         Calculate p = p * (xp - Xj)/(Xi - Xj)
       End If
     Next j
     Calculate yp = yp + p * Yi
   Next i

6. Display value of yp as interpolated value.

7. Stop */


#include<stdio.h>
#include<conio.h>

int main()
{
	 float x[100], y[100], xp, yp=0, p;
	 int i,j,n;
	 printf("Enter number of data:- ");
	 scanf("%d", &n);
	 printf("Enter data:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
	 }
	 printf("Enter value of x:- ");
	 scanf("%f", &xp);
	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	 printf("Result= %f", yp);
	 getch();
}
