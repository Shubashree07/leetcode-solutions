
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    int index;
    int used;
} HashEntry;

int hashFunction(int key, int capacity) {
    unsigned int x = (unsigned int)key;
    x ^= x >> 16;
    return (int)(x % (unsigned int)capacity);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int capacity = numsSize * 2 + 1;

    HashEntry* table = calloc(capacity, sizeof(HashEntry));
    int* result = malloc(2 * sizeof(int));

    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int pos = hashFunction(complement, capacity);

        while (table[pos].used) {
            if (table[pos].key == complement) {
                result[0] = table[pos].index;
                result[1] = i;
                *returnSize = 2;

                free(table);
                return result;
            }

            pos = (pos + 1) % capacity;
        }

        pos = hashFunction(nums[i], capacity);

        while (table[pos].used) {
            pos = (pos + 1) % capacity;
        }

        table[pos].key = nums[i];
        table[pos].index = i;
        table[pos].used = 1;
    }

    free(table);
    free(result);
    return NULL;
}

#ifdef LOCAL_TEST

void runTest(int nums[], int size, int target) {
    int returnSize;
    int* result = twoSum(nums, size, target, &returnSize);

    if (result != NULL && returnSize == 2) {
        printf("[%d, %d]\n", result[0], result[1]);
        free(result);
    } else {
        printf("No solution found\n");
    }
}

int main(void) {
    int nums1[] = {2, 7, 11, 15};
    int nums2[] = {3, 3};

    printf("Test 1: ");
    runTest(nums1, 4, 9);

    printf("Test 2: ");
    runTest(nums2, 2, 6);

    return 0;
}

#endif

