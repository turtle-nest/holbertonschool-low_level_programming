#include <stdio.h>
/**
 * main - Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
int main() {
    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
    printf("Size of a float: %zu byte(s)\n", sizeof(float));
    printf("Size of a double: %zu byte(s)\n", sizeof(double));
    printf("Size of a short: %zu byte(s)\n", sizeof(short));

    return 0;
}
