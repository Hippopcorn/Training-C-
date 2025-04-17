#include <unistd.h>


void ft_putchar(char c);
void ft_full_line(int size);
void ft_empty_line(int size);

int main() {
	int squareSize = 5;
	int nbr_empty_line = squareSize - 2;
	int counter = 0;

	ft_full_line(squareSize);

	while (counter < nbr_empty_line) {
		ft_empty_line(squareSize);
		counter++;
	}
	ft_full_line(squareSize);
	return 0;
}


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
