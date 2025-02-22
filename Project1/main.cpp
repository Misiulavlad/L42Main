#include "util.h"

int main() {
    int matrix[N][N];

    init_random(matrix);
    print_matrix(matrix);

    int maxValue = max(matrix);
    cout << "Max is: " << maxValue << endl;

    return 0;
}
