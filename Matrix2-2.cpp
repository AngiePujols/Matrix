#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int rows, cols;
    cout << "Ingrese la cantidad de filas: ";
    cin >> rows;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> cols;
    
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    
    cout << "Ingrese los valores de la matriz:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Imprimir la matriz
    int elementWidth;
    cout << "Ingrese el ancho de cada elemento de la matriz (3 o 4): ";
    cin >> elementWidth;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(elementWidth) << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    // Liberar la memoria asignada
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    return 0;
}

