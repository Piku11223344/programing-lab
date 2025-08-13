#include <stdio.h>

int main() {
    char ch = 'c';  // The character whose ASCII value we want
    int ascii_value;

    ascii_value = (int)ch;  // Typecasting char to int

    printf("The ASCII value of '%c' is %d\n", ch, ascii_value);

    return 0;
}
