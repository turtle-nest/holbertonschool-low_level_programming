#include "main.h"
/**
 *print_buffer - prints a buffer.
 * @b: is a char
 * @size: a int
 *
 * Description: prints a buffer.
 *
 * Return: void.
 */
#include <stdio.h>

void print_buffer(char *b, int size) {
    if (size <= 0) {
        putchar('\n');
        return;
    }

    for (int i = 0; i < size; i += 10) {
        printf("%08x: ", i);

        for (int j = 0; j < 10; j++) {
            if (i + j < size) {
                printf("%02x", (unsigned char)b[i + j]);
            } else {
                printf("  ");
            }
            if (j % 2 == 1) {
                printf(" ");
            }
        }

        for (int j = 0; j < 10; j++) {
            if (i + j < size) {
                char c = b[i + j];
                if (c >= 32 && c <= 126) {
                    putchar(c);
                } else {
                    putchar('.');
                }
            }
        }

        putchar('\n');
    }
}

