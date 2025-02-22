#include "util.h"
void init_random(int matrix[N][N]) {
	srand(time(0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % 101;
		}
	}
}

void print_matrix(int matrix[N][N]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int max(int matrix[N][N]) {
	
	int max = matrix[0][1];
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (matrix[i][j] > max){
				max = matrix[i][j];
			}
		}
	}
	return max;
}