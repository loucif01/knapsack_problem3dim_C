#include<stdio.h> 


int max(int a, int b) { return (a > b)? a : b; } 
  
  
  
int knapSack(int V,int vol[],int W, int wt[], int val[], int n) 
{
   if (n == 0 || W == 0|| V==0) 
       return 0; 

   if ((wt[n-1] > W) ||(vol[n-1])>V)
       return knapSack(V,vol,W, wt, val, n-1); 

   else return max( val[n-1] + knapSack(V-vol[n-1],vol,W-wt[n-1], wt, val, n-1), knapSack(V,vol,W, wt, val, n-1) ); 
} 
  


int main(void) 
{ 
    int val[] = {6 ,8 ,14 ,6 ,13 ,17 ,10 ,4 ,5 ,11 ,26 ,35 ,2 ,1 ,2 ,7 ,15 ,17 ,30 ,3}; 
    int wt[] = {20, 30, 50, 20, 40, 60, 30, 10, 14, 36, 72, 86, 5, 3, 7, 23, 49, 57, 69, 12}; 
    int vol[] = {10, 15, 25, 10, 20, 30, 15, 5, 7, 18, 36, 43, 3, 2, 4, 12, 25, 29, 35, 6};
    int  W = 520; 
    int V=300;
    int n = sizeof(val)/sizeof(val[0]); 
    printf("%d\n", knapSack(V,vol,W, wt, val, 20)); 

    return 1;
} 
