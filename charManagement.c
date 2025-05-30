#include "charManagement.h"
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int ft_read_enter(char enter[]) { // doit renvoyer la taille du tableau
    int i = 0;
    while (i < 10) {
        read(1, &enter[i], 1);
        if (enter[i] == '\n') {
            return i;
        }
        ft_putchar(enter[i]);
        i++;
    }

    return i;
}

int convert_char_to_int(char enter[], int sizeString) {
    int iChar = sizeString - 1;
    int multiplicationFactor = 1;
    int squareSize = 0;

    while (iChar >= 0) {
        squareSize += (enter[iChar] - '0') * multiplicationFactor;
        printf("i = %d, enter[i] = %c\n", iChar, enter[iChar]);

        printf("squareSize = %d\n", squareSize);
        multiplicationFactor *= 10;
        iChar--;
    }
    printf("squareSize = %d\n", squareSize);
    return squareSize;
}
