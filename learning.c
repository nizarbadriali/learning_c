#include <stdio.h>

void inspect(char str[]) {
    *(str + 2) = '\0';
    printf("%d\n", sizeof(str));
}

int main() {
    char a[] = {'c', 'o', 'd', 'e'};
    char b[] = "code";

    printf("%d\n", sizeof(a) + 2);
    printf("%d\n", sizeof(b) + 2);
    printf("%d\n", sizeof(b + 100));

    inspect(b);
    printf("%s\n", b);

    return 0;
}