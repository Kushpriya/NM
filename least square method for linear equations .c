/*1. Start

2. Read Number of Data (n)

3. For i=1 to n:
     Read Xi and Yi
   Next i

4. Initialize:
     sumX = 0
     sumX2 = 0
     sumY = 0
     sumXY = 0

5. Calculate Required Sum
   For i=1 to n:
     sumX = sumX + Xi
     sumX2 = sumX2 + Xi * Xi
     sumY = sumY + Yi
     sumXY = sumXY + Xi * Yi
   Next i

6. Calculate Required Constant a and b of y = a + bx:
   b = (n * sumXY - sumX * sumY)/(n*sumX2 - sumX * sumX)
   a = (sumY - b*sumX)/n

7. Display value of a and b

8. Stop*/
#include<stdio.h>
#include<conio.h>

#define S 50

int main()
{
 int n, i;
 float x[S], y[S], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b;
 printf(" How many data points you want to enter?\n");
 scanf("%d", &n);
 printf("Enter data:\n");
 for(i=1;i<=n;i++)
 {
  printf("x[%d]=",i);
  scanf("%f", &x[i]);
  printf("y[%d]=",i);
  scanf("%f", &y[i]);
 }
 for(i=1;i<=n;i++)
 {
  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + y[i];
  sumXY = sumXY + x[i]*y[i];
 }
 b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 a = (sumY - b*sumX)/n;
 printf("Values are: a=%0.2f and b = %0.2f",a,b);
 printf("\nEquation of best fit is: y = %0.2f + %0.2fx",a,b);
 getch();
 return(0);
}
