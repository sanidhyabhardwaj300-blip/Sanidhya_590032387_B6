//Second largest number in an array using recursion
#include<stdio.h>
int secondLargest(int arr[], int n, int largest, int secondLargestNum) {
    if (n == 0) {
        return secondLargestNum;
    }
    if (arr[n - 1] > largest) {
        secondLargestNum = largest;
        largest = arr[n - 1];
    } else if (arr[n - 1] > secondLargestNum && arr[n - 1] != largest) {
        secondLargestNum = arr[n - 1];
    }
    return secondLargest(arr, n - 1, largest, secondLargestNum);
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

    if (n < 2) {
        printf("Error: Array must have at least two elements to find the second largest.\n");
        return 1;
    }

    int largest = arr[0];
    int secondLargestNum = -1; // Assuming all numbers are non-negative
    secondLargestNum = secondLargest(arr, n, largest, secondLargestNum);

    if (secondLargestNum == -1) {
        printf("There is no second largest number in the array.\n");
    } else {
        printf("The second largest number in the array is: %d\n", secondLargestNum);
    }
    
    return 0;
}