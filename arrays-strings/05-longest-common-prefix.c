#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    static char result[201];

    if (strsSize == 0) {
        result[0] = '\0';
        return result;
    }

    int i = 0;

    while (strs[0][i] != '\0') {
        char ch = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != ch) {
                result[i] = '\0';
                return result;
            }
        }

        result[i] = ch;
        i++;
    }

    result[i] = '\0';
    return result;
}

#ifdef LOCAL_TEST
int main() {
    char *test1[] = {"flower", "flow", "flight"};
    char *test2[] = {"dog", "racecar", "car"};
    char *test3[] = {"a"};

    printf("Test 1: %s\n", longestCommonPrefix(test1, 3));
    printf("Test 2: \"%s\"\n", longestCommonPrefix(test2, 3));
    printf("Test 3: %s\n", longestCommonPrefix(test3, 1));

    return 0;
}
#endif