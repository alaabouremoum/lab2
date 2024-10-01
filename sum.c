#include <stdlib.h>
#include "sum.h"
#include "abs_max.h"

int sum(int arr[], int size) {
    int max_val = abs_max(arr, size);
    int sum = 0;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (abs(arr[i]) == max_val) {
            found = 1;
        }
        if (found) {
            sum += arr[i];
        }
    }

    return sum;
}