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

int sum_of_positive(int matrix[N][N]) {
	int count_of_positive = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (matrix[i][j] > 0) {
				count_of_positive++;
			}
		}
	}
	return count_of_positive;
}

int sum_of_negative(int matrix[N][N]) {
	int count_of_negative = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (matrix[i][j] < 0) {
				count_of_negative++;
			}
		}
	}
	return count_of_negative;
}