/*1. Start

2. Define function f(x,y)

3. Read values of initial condition(x0 and y0), 
   number of steps (n) and calculation point (xn)
   
4. Calculate step size (h) = (xn - x0)/n

5. Set i=0

6. Loop 
      
      k1 = h * f(x0, y0)
      k2 = h * f(x0+h/2, y0+k1/2)
      k3 = h * f(x0+h/2, y0+k2/2)
      k4 = h * f(x0+h, y0+k3)
      
      k = (k1+2*k2+2*k3+k4)/8
      
      yn = y0 + k
      
      i = i + 1
      x0 = x0 + h
      y0 = yn
      
   While i < n


7. Display yn as result


8. Stop*/
#include<stdio.h>
#include<conio.h>

#define f(x,y) (x+(y*y))

int main()
{
 float x0, y0, xn, h, yn, k1, k2, k3, k4, k;
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

 /* Runge Kutta Method */
 printf("\nx0\ty0\tyn\n");
 for(i=0; i < n; i++)
 {
  k1 = h * (f(x0, y0));
  k2 = h * (f((x0+h/2), (y0+k1/2)));
  k3 = h * (f((x0+h/2), (y0+k2/2)));
  k4 = h * (f((x0+h), (y0+k3)));
  k = (k1+2*k2+2*k3+k4)/8;
  yn = y0 + k;
  printf("%0.4f\t%0.4f\t%0.4f\n",x0,y0,yn);
  x0 = x0+h;
  y0 = yn;
 }

 /* Displaying result */
 printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);

 getch();
 return 0;
}

