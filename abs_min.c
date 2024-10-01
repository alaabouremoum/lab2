#include <stdlib.h>
#include "abs_min.h"

int abs_min(int arr[], int size) {
    int min_val = abs(arr[0]);
    for (int i = 1; i < size; i++) {
        if (abs(arr[i]) < min_val) {
            min_val = abs(arr[i]);
        }
    }
    return min_val;
}