#include "line.h"
#include <stdio.h>
#include <unistd.h>

void ft_create_square(int size);
int ft_read_enter(char enter[]);
int convert_char_to_int(char enter[], int sizeString);

int main() {
    char enterSquareSize[10];
    int sizeEnter = ft_read_enter(enterSquareSize);
    int squareSize = convert_char_to_int(enterSquareSize, sizeEnter);

    ft_create_square(squareSize);
    return 0;
}

void ft_create_square(int size) {
    if (size == 1) {
        ft_full_line(size);
        return;
    }

    int nbr_empty_line = size - 2;
    int counter = 0;
    ft_full_line(size);

    while (counter < nbr_empty_line) {
        ft_empty_line(size);
        counter++;
    }

    ft_full_line(size);
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
