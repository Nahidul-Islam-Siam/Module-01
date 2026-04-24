#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);  // ✅ সঠিক - array এ মান নাও
    }
    
    // Replacement লজিক
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)           // পজিটিভ হলে
            a[i] = 1;
        else if (a[i] < 0)      // নেগেটিভ হলে
            a[i] = 2;
        // 0 থাকবে 0 হিসেবেই
    }
    
    // Output
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(" ");  // শেষটার পরে space না দিয়ে
    }
    printf("\n");
    
    return 0;
}