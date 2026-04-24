#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
int psum = 0;
int nsum = 0;
    for (int i = 0; i < n; i++)
    {
      int value;
      scanf("%d",&value);

      if(value > 0)
      {
        psum = psum + value;
      } else if(value < 0){
        nsum = nsum + value;
      }

 
   




    }

     printf("%d ",psum);
        printf("%d ",nsum);



    return 0;
}





