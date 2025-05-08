#include <stdio.h>


int insertionSort(int arr[], int arrSize) {
    int i;

    for (i = 0; i <= arrSize - 1; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    return 0;
}

int main() {
    int arr[] = {3,5,4,6,2,8,7,9,1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int *ptr;

    insertionSort(arr, arrSize);

    for (ptr = &arr[0]; ptr <= &arr[arrSize - 1]; ptr++) {
        printf("%d\n", *ptr);
    }

    return 0;
}
