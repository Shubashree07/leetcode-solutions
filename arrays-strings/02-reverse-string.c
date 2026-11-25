
#include <stdio.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

#ifdef LOCAL_TEST

int main() {
    char s1[] = "hello";
    char s2[] = "Hannah";

    reverseString(s1, 5);
    reverseString(s2, 6);

    printf("Test 1: %s\n", s1);
    printf("Test 2: %s\n", s2);

    return 0;
}

#endif
