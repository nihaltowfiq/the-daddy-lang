#include <stdio.h>

void reverse(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++)  {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }  

}

int main() {
    int arr[5] = {51,21,34,4,555};

    reverse(arr, 5);

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}