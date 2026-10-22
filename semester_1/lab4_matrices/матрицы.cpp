#include <iostream>

void calculatePrefixSums(int** matrix, int** prefix, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int curr = matrix[i][j];

            int top;
            if (i > 0) {
                top = prefix[i - 1][j];
            }
            else {
                top = 0;
            }

            int left;
            if (j > 0) {
                left = prefix[i][j - 1];
            }
            else {
                left = 0;
            }

            int diag;
            if (i > 0 && j > 0) {
                diag = prefix[i - 1][j - 1];
            }
            else {
                diag = 0;
            }

            prefix[i][j] = curr + top + left - diag;
        }
    }
}

int main() {
    int n, m;
    setlocale(LC_ALL, "RU");

    std::cout << "Введите количество строк: ";
    std::cin >> n;
    std::cout << "Введите количество столбцов: ";
    std::cin >> m;

    int** matrix = new int* [n];
    int** prefix = new int* [n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
        prefix[i] = new int[m];
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "\n";

    calculatePrefixSums(matrix, prefix, n, m);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << prefix[i][j] << " ";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
        delete[] prefix[i];
    }
    delete[] matrix;
    delete[] prefix;

    return 0;
}