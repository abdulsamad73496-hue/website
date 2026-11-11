#include <stdio.h>
#include <stdlib.h>
int main() {
    int count = 5;
    int *arr_ptr = (int *)malloc(count * sizeof(int));
    if (arr_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", count);
    for (int i = 0; i < count; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", arr_ptr + i); 
    }

    printf("\nStored elements are: ");
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", *(arr_ptr + i)); 
    }
    printf("\n");

    free(arr_ptr);
    return 0;
}
