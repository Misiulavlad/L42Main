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

int odd_below_diagonal(int matrix[N][N]) {
    int count_of_odd = 0;
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] % 2 != 0) {
                count_of_odd++;
            }
        }
    }
    return count_of_odd;
}

int even_below_diagonal(int matrix[N][N]) {
    int count_of_even = 0;
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) { 
            if (matrix[i][j] % 2 == 0) {
                count_of_even++;
            }
        }
    }
    return count_of_even;
}
