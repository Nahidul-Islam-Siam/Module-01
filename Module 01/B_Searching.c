#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);  // ✅ সঠিক
    }
    
    int x;
    scanf("%d", &x);
    
    int index = -1;  // প্রথমেই -1 দিয়ে শুরু
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            index = i;  // ✅ position assign করো
            break;      // প্রথম পেলেই থেমে যাও
        }
    }
    
    printf("%d", index);
    return 0;
}