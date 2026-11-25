#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

#ifdef LOCAL_TEST
int main() {
    printf("Test 1: %s\n",
           isAnagram("anagram", "nagaram") ? "true" : "false");

    printf("Test 2: %s\n",
           isAnagram("rat", "car") ? "true" : "false");

    printf("Test 3: %s\n",
           isAnagram("a", "a") ? "true" : "false");

    return 0;
}
#endif