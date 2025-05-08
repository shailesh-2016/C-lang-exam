

#include <stdio.h>

void reverse(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int Array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
    
    int arr[100],n;
    printf("enter the elements of the array :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The reverse of the array is: ");
    reverse(arr, n);
    int result = Array(arr, n);


    printf("The sum of the array elements is: %d\n", result);
}