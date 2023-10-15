/*1. Start

2. Define function f(x,y)

3. Read values of initial condition(x0 and y0), 
   number of steps (n) and calculation point (xn)
   
4. Calculate step size (h) = (xn - x0)/b

5. Set i=0

6. Loop 
      
      yn = y0 + h *  f(x0 + i*h, y0) 
      
      y0 = yn
      
      i = i + 1

   While i < n

7. Display yn as result

8. Stop*/
#include<stdio.h>
#include<conio.h>

#define f(x,y) (-x*(y*y))

int main()
{
 float x0, y0, xn, h, yn, slope;
 int i, n;
 printf("Enter Initial Condition\n");
 printf("x0 = ");
 scanf("%f", &x0);
 printf("y0 = ");
 scanf("%f", &y0);
 printf("Enter calculation point xn = ");
 scanf("%f", &xn);
 printf("Enter number of steps: ");
 scanf("%d", &n);

 /* Calculating step size (h) */
 h = (xn-x0)/n;

 /* Euler's Method */
 printf("\nx0\ty0\tslope\tyn\n");
 printf("------------------------------\n");
 for(i=0; i < n; i++)
 {
  slope = f(x0, y0);
  yn = y0 + h * slope;
  printf("%.4f\t%.4f\t%0.4f\t%.4f\n",x0,y0,slope,yn);
  y0 = yn;
  x0 = x0+h;
 }

 /* Displaying result */
 printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);

 getch();
 return 0;
}

