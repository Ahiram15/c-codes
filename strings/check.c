#include <stdio.h>

int main() {
    int i, n, check;
    int arr[50];
    
    printf("size: ");
    scanf("%d", &n);
    
    printf("numbers: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("number to search: ");
    scanf("%d", &check);
    
    for (i = 0; i < n; i++) {
        if (check == arr[i]) {
            printf("found at index: %d\n", i);
            break;
        }
    }
    
    if (i == n) {
        printf("No\n");
    }
    
    return 0;
}
