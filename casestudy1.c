//the bigger is better
#include <stdio.h>
#include <string.h>

void next_permutation(char s[]) {
    int n = strlen(s);
    int i = n - 2;
    while (i >= 0 && s[i] >= s[i + 1]) i--;
    if (i == -1) {
        printf("no answer\n");
        return;
    }
    int j = n - 1;
    while (s[j] <= s[i]) j--;
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    int left,right;
    for ( left = i + 1, right = n - 1; left < right; left++, right--) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
    }
    printf("%s\n", s);
}

int main() {
    int t;
    printf("enter the number of inputs:");
    scanf("%d", &t);
    while (t--) {
        char s[101];
        printf("enter the string:");
        scanf("%s", s);
        next_permutation(s);
    }
    return 0;
}

