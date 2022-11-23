#include <stdio.h>
#include <string.h>

void sort_and_clean(char *str) {
    int j;
    char key;
    int n = strlen(str);
    for (int i = 1; i < n; i++) {
        key = str[i];
        j = i - 1;
        while (j >= 0 && str[j] > key) {
            str[j + 1] = str[j];
            j = j - 1;
        }
        str[j + 1] = key;
    }

    for (int i = 0; i <= n; i++) {
        if (str[i] != ' ') {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

int main() {
    char str[1000][1000];
    int lines = 0;
    
    for (int i = 0; 1; i++) {
        scanf("%[^\n]s", str[i]);
        getchar();
        lines++;
        if (strcmp(str[i], "exit") == 0) {
            break;
        }
    }

    for (int i = 0; i < lines - 1; i++) {
        sort_and_clean(str[i]);
    }

    return 0;
}