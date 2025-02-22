#include "util.h"

int main() {
	int matrix[N][N];
	init_random(matrix);

	print_matrix(matrix);

	cout << "Odd count is: " << odd_below_diagonal(matrix)<< endl;

	cout << "Even count is: " <<  even_below_diagonal( matrix)<< endl;

	return 0;
}
