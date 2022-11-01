#include <stdio.h>

// convert long long to binary
void convert(long long num) {
    if (num == 0) {
        return;
    }
    convert(num / 2);
    printf("%lld", num % 2);
}

int main() {
    long long num;
    scanf("%lld", &num);
    convert(num);
    return 0;
}