#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void Pattern(int i,int j,int k,int n, int l,int a[k][k])
{
    if(n==1)
    {
        a[i][j]=1;
        return;
    }else if(i==l || j==l || i==k-1-l || j==k-1-l)
    {
        a[i][j]=n-l;
    }else{
        l++;
        Pattern(int i,int j,int k,int (n-1), int l, int a[k][k]);
        l--;
    }
}
void Print(int k,int arr[k][k])
{
    for(int i=0;i<k;++i)
    {
        for(int j=0;j<k;++j)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() 
{

    int n;
    scanf("%d", &n);
    int k=2*n-1,l;
  	int arr[k][k];
    for(int i=0;i<k;++i)
    {
        for(int j=0;j<k;++j)
        {
            Pattern( i, j, k, n,0,arr);
        }
        
    }
    
    Print(k, arr);
    
    return 0;
}
