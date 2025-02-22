#include "util.h"
int main() {
	int matrix[N][N];
	init_random(matrix);
	print_matrix(matrix);
	cout<<((zero(matrix)) ? "There is zeroes" : "There isn't zeroes");
}