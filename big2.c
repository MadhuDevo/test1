#include <stdio.h>

biggest2() {
    int n, i;
    int first, second;

    // Input the number of elements
    printf("Enter the number of elements:\n\n ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least two numbers.\n\n");
        return 1;
    }

    int arr[n];

    // Input the elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    // Loop through the rest
    for (i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("The largest number is: %d\n", first);
    printf("The second largest number is: %d\n", second);

   // return 0;
}

