//finding gem stones
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 101

void gem_elements_count(int n, char rocks[n][MAX_LENGTH]) {
    int gem_elements[26] = {0};
    int temp[26];
    int i, j;

    for (i = 0; i < 26; i++) {
        gem_elements[i] = 1;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < 26; j++) {
            temp[j] = 0;
        }
        for (j = 0; j < strlen(rocks[i]); j++) {
            temp[rocks[i][j] - 'a'] = 1;
        }
        for (j = 0; j < 26; j++) {
            gem_elements[j] = gem_elements[j] && temp[j];
        }
    }

    int gem_count = 0;
    char gem_elements_list[26];
    int gem_index = 0;

    for (i = 0; i < 26; i++) {
        if (gem_elements[i]) {
            gem_elements_list[gem_index++] = i + 'a';
            gem_count++;
        }
    }

    printf("%d\n", gem_count);
    if (gem_count > 0) {
        for (i = 0; i < gem_count; i++) {
            printf("%c", gem_elements_list[i]);
            if (i < gem_count - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n, i;
    printf("Enter the number of rocks: ");
    scanf("%d", &n);
    char rocks[n][MAX_LENGTH];

    for (i = 0; i < n; i++) {
        printf("Enter composition of rock %d: ", i + 1);
        scanf("%s", rocks[i]);
    }

    gem_elements_count(n, rocks);
    return 0;
}

