#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    double* y = new double[m];
    double* X = new double[m * n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> X[i * n + j];
        }
        std::cin >> y[i];
    }

    double* transpozycjaX = new double[n * m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpozycjaX[j * m + i] = X[i * n + j];
        }
    }

    double* wynik = new double[n];
    for (int i = 0; i < n; i++) {
        wynik[i] = 0;
        for (int j = 0; j < m; j++) {
            wynik[i] += transpozycjaX[i * m + j] * y[j];
        }
    }

    std::cout.precision(10);
    for (int i = 0; i < n; i++) {
        std::cout << wynik[i];
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;


    return 0;
}
