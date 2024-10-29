#ifndef main_h
#define main_h

/**
 * _isupper - checks for uppercase character
 * @c: argument checked
 *
 * Return: 1 if c uppercase otherwise 0.
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}
#endif /* main.h */
