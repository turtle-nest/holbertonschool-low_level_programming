#include <stdio.h>
/**
 * main - checks the instructions
 * @void: none
 *
 * Description:  prints _putchar, followed by a new line.
 * (* section header: Section description)*
 * Return: none
 */
void print_times_table(int n) {
int i;
	
    if (n < 0 || n > 15) {
        return;
    }

    for (i = 0; i <= 10; i++) {
        printf("%d", n * i);
        if (i < 10) {
            printf(", ");
        }
    }
    printf("\n");
}


