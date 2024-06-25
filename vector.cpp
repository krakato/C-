#include <iostream>
#include <vector>

using namespace std;
int main() {
	
	int filas = 5;
	int columnas = 5;

	vector<vector<int>> Matriz(filas, vector<int>(columnas));
	Matriz[0][1] = 45;
	Matriz[0][3] = 5;

	cout << Matriz[0][1] << "   " << Matriz[0][3] << endl;

	return 0;
}