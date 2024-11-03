#include <stdio.h>
#include <unistd.h>
/**
 * main - checks the instructions
 * @void: none
 *
 * Description:  prints _putchar, followed by a new line.
 * (* section header: Section description)*
 * Return: none
 */
void print_number(int n) {
    if (n < 10) {
        putchar(n + '0');
    } else {
        print_number(n / 10);
        putchar(n % 10 + '0');
    }
}

void print_times_table(int n) {
	int i;
    if (n < 0 || n > 15) {
        return;
    }

    for (i = 0; i <= 10; i++) {
        int product = n * i;
        print_number(product);
        if (i < 10) {
            write(1, ", ", 2);
        }
    }
    write(1, "\n", 1);
}


