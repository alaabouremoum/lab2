#include <stdlib.h>
#include "diff.h"
#include "abs_max.h"
#include "abs_min.h"

int diff(int arr[], int size) {
    int max_val = abs_max(arr, size);
    int min_val = abs_min(arr, size);
    return max_val - min_val;
}