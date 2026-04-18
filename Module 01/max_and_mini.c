#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
// Find the maximum and minimum of three numbers A, B and C.




    // minimum of three numbers
    if(B<A && B<C){

        printf("%d ", B);
    } else if(A<B && A<C){
        printf("%d ", A);
    } else if(C<A && C<B){
        printf("%d ", C);
    }


    // maximum of three numbers
    if(B>A && B>C){

        printf("%d ", B);

    } else if(A>B && A>C){
   
        printf("%d ", A);
    } else if(C>A && C>B){
     
        printf("%d ", C);
    } 




    return 0;
}