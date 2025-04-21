#include "charManagement.h"
#include "square.h"
#include <stdio.h>
#include <unistd.h>

int main() {
    char enterSquareSize[10];
    int sizeEnter = ft_read_enter(enterSquareSize);
    int squareSize = convert_char_to_int(enterSquareSize, sizeEnter);

    ft_create_square(squareSize);
    return 0;
}
