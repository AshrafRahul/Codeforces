#include <stdio.h>
#include <string.h>

char s[10000001];
int count[26];

int main() {
    scanf("%s", s);

    for (int i = 0; i < 26; i++) {
        count[i] = 0;
    }

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int value = s[i] - 'a';
            count[value]++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("%c : %d\n", 'a' + i, count[i]);
            count[i] = 0;
        }
    }

    return 0;
}
