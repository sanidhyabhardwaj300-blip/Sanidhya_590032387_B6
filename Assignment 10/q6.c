//Occurrences of the Maximum Element
#include <stdio.h>
int countOccurrences(int arr[], int n, int maxElement) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == maxElement) {
            count++;
        }
    }
    return count;
}   
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum element
    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Count occurrences of the maximum element
    int occurrences = countOccurrences(arr, n, maxElement);
    printf("The maximum element is: %d\n", maxElement);
    printf("Occurrences of the maximum element: %d\n", occurrences);

    return 0;
}