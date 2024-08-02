#include <stdio.h>

int main() {
    char exp[200];
    fgets(exp, 200, stdin);
    printf("%s", exp);
}