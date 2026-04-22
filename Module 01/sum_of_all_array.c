#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
      scanf("%d",&a[i]);
    //   printf("%d\t",a[i]);
    }
    int sum;
      for(int i=0; i<n; i++)
    {
    //   scanf("%d",&a[i]);
    sum = sum + a[i];
      
    }
    printf("%d\t",sum);
    return 0;
}