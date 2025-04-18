#include <unistd.h>


void ft_putchar(char c);
void ft_full_line(int size);
void ft_empty_line(int size);
void ft_create_square(int size);

int main() {
	int squareSize = 2;
	ft_create_square(squareSize);
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

void ft_create_square(int size) {

		if (size == 1) {
			ft_full_line(size);
		}

		else {
	      	 int nbr_empty_line = size - 2;	        
    		 int counter = 0; 
         	 ft_full_line(size);

         	 while (counter < nbr_empty_line) {
                  ft_empty_line(size);
                  counter++;
         	 }

         	 ft_full_line(size);
	}	
}
			
