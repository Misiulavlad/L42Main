#include "util.h"
int main() {
	int matrix[N][N];
	 init_random( matrix);
	 print_matrix( matrix);
	cout <<"Sum of positive: "<< sum_of_positive(matrix)<<endl;

	cout<<"Sum of negative: "<< sum_of_negative(matrix);
}