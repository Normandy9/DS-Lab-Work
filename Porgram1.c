// Brute Force Technique
// Time complexity: O(n^K) where 0<=K<n
#include<stdio.h>
void main()
{
    int n,k,K,i,j,temp;
    int a[50];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number of times array has to be rotated: ");
    scanf("%d",&k);

    if(k>=n)
    {
        K=k%n;
    }
    else
    {
        K=k;
    }
    
    for(i=0;i<K;i++)
    {
        for(j=n-1;j>=1;j--)
        {
            if(j==n-1)
            {
                temp=a[0];
                a[0]=a[n-1];
                a[n-1]=temp;
            }
            else{
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    }

    printf("Array after %d rotations:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
    
}