#include "line.h"

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_full_line(int size) {
    int i = 0;
    while (i < size) {
        ft_putchar('*');
        i++;
    }
    ft_putchar('\n');
}

void ft_empty_line(int size) {
    int i = 0;
    ft_putchar('*');
    while (i < (size - 2)) {
        ft_putchar(' ');
        i++;
    }
    ft_putchar('*');
    ft_putchar('\n');
}
