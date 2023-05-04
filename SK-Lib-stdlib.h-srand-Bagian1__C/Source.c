#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	printf("First number: %d\n", rand() % 100);
	srand(time(NULL));

	printf("Random number: %d\n", rand() % 100);
	srand(1);

	printf("Again the first number: %d\n", rand() % 100);

	_getch();
	return 0;
}