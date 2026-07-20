//Array rotation using reversal algorithm
// Time Complexity: O(n)
#include <stdio.h>

void reverse(int a[], int start, int end)
{
    while (start < end) {
        int tmp = a[start];
        a[start] = a[end];
        a[end] = tmp;
        start++;
        end--;
    }
}

int main(void)
{
    int n, k, K, i;
    int a[50];

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 1;
    if (n <= 0 || n > 50) {
        printf("Number of elements must be between 1 and 50\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    printf("Enter number of times array has to be rotated: ");
    if (scanf("%d", &k) != 1) return 1;

    K = k % n;
    if (K < 0) K += n;


    if (K != 0) {
        reverse(a, 0, n - 1);//This reverses the entire array
        reverse(a, 0, K - 1);//This reverses the first K elements of the array 
        reverse(a, K, n - 1);//This reverses the remaining elements of the array
        // if ar[5]={1,2,3,4,5} and k=3 then :
        //for first reverse: ar[5]={5,4,3,2,1}
        //for second reverse: ar[5]={3,4,5,2,1}
        //for third reverse: ar[5]={3,4,5,1,2
    }

    printf("Array after %d rotations:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}