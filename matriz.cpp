#include <iostream>
using namespace std;
int main() {
	int filas = 5;
	int columnas = 10;
	int **pnt = new int*[filas];

	for (int i = 0; i < filas; i++)
	{
		pnt[i] = new int[columnas];
	}
	pnt[0][0] = 5;
	pnt[3][2] = 5;

	cout << pnt[0][0] << "   " << pnt[3][2] << endl;

	for (int i = 0; i < filas; i++)
	{
		delete pnt[i];
	}
	delete[]pnt;
	return 0;
}