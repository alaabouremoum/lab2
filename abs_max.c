#include <stdlib.h>
#include "abs_max.h"

int abs_max(int arr[], int size) {
    int max_val = abs(arr[0]);
    for (int i = 1; i < size; i++) {
        if (abs(arr[i]) > max_val) {
            max_val = abs(arr[i]);
        }
    }
    return max_val;
}