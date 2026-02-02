#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;

    printf("Enter number of integers to allocate: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Memory allocated successfully\n");

    for (int i = 0; i < n; i++) {
        arr[i] = i * 10;
    }

    printf("Stored values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    printf("\nMemory freed successfully\n");

    return 0;
}
