#include<stdio.h>

int main()
{
    int n, i, j, k, temp;
    int a[50];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements (only 0, 1 and 2): ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    //placing all 0's at the beginning of the array:
    i = 0;
    for(j = 0; j < n; j++)
    {
        if(a[j] == 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
        }
    }
    
    //placing all 1's after the 0's in the array:
    for(j = i; j < n; j++)
    {
        if(a[j] == 1)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
        }
    }
    
    printf("Array after sorting: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}