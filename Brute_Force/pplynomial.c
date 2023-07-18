/*program to Evaluate the poynomial for x with hihest to lowest power */

#include<stdio.h>
#include<stdlib.h>


int polynomial(int a[],int n,int x)
{
   int pv=0;
   int px;


   for(int i=n-1;i>=0;i--)
   {
       px=1;
       for(int j=1;j<=i;j++)
        px=px*x;

       pv=pv+a[i]*px;
   }
    return pv;
}




void main()
{
    int x,n;
  printf("ENTER THE VALUES OF x and N\n");
  scanf("%d%d",&x,&n);
  int a[n];
  printf("THE VALUES OF COEFFICIENT OF X with increasing order\n");
  for(int i=0; i<n; i++)
  scanf("%d",&a[i]);
  int result=polynomial(a,n,x);
  printf("THE VALUES OF THE POLYNOMIAL IS %d\n",result);



}