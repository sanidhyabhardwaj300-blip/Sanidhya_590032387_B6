//Recusrsion Binary Search Tree
#include <stdio.h>
int BinarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

       
        if (arr[mid] == x)
            return mid;

      
        if (arr[mid] > x)
            return BinarySearch(arr, left, mid - 1, x);

     
        return BinarySearch(arr, mid + 1, right, x);
    }

    
    return -1;
}

int main() {
    int n, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    int result = BinarySearch(arr, 0, n - 1, x);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;
}