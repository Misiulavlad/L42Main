#pragma once
#include <iostream>
using namespace std;
#define N 5 
void init_random(int matrix[N][N]);

void print_matrix(int matrix[N][N]);

int odd_below_diagonal(int matrix[N][N]);
int even_below_diagonal(int matrix[N][N]);

