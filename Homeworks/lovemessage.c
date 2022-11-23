#include <stdio.h>
#include <string.h>

void sort(char *str) {
    int j;
    int n = strlen(str);
    char key;
    for (int i = 1; i < n; i++) {
        key = str[i];
        j = i - 1;
        while (j >= 0 && str[j] > key) {
            str[j + 1] = str[j];
            j = j - 1;
        }
        str[j + 1] = key;
    }
}

void remove_spaces(char *str) {
    int n = strlen(str);
    for (int i = 0; i <= n; i++) {
        if (str[i] != ' ') {
            printf("%c", str[i]);
        }
    }
}

int main() {
    char str[1000][1000];
    int count = 0;
    
    for (int i = 0; 1; i++) {
        scanf("%[^\n]s", str[i]);
        getchar();
        count++;
        if (strcmp(str[i], "exit") == 0) {
            break;
        }
    }

    for (int i = 0; i < count - 1; i++) {
        sort(str[i]);
        remove_spaces(str[i]);
        printf("\n");
    }

    return 0;
}