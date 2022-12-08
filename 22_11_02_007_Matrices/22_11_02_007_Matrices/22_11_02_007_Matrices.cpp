// 22_11_02_007_Matrices dinamicas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez

#include <iostream>

int main()
{
	int matriz[2][2];

	for (int row = 0; row < (sizeof(matriz) / sizeof(matriz[0])); row++)
	{
		for (int column = 0; column < (sizeof(matriz[0]) / sizeof(matriz[0][0])); column++)
		{
			std::cout << "Ingrese la posicion [" << row << "]" << "[" << column << "] " << std::endl;
			std::cin >> matriz[row][column];
		}
	}

	for (int row = 0; row < (sizeof(matriz) / sizeof(matriz[0])); row++)
	{
		for (int column = 0; column < (sizeof(matriz[0]) / sizeof(matriz[0][0])); column++)
		{
			std::cout << "La posicion [" << row << "]" << "[" << column << "] " << matriz[row][column] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << "\n----Matriz dinamica----" << std::endl;

	int rows = 0, cols = 0, random = 0;

	std::cout << "Ingresa numero de filas:" << std::endl;
	std::cin >> rows;

	std::cout << "Ingresa numero de columnas:" << std::endl;
	std::cin >> cols;

	srand(time(0));

	std::cout << "\nMatriz:" << std::endl;

	int** matrix = new int* [rows];
	for (int i = 0; i < rows; ++i)
		matrix[i] = new int[cols];

	for (int j = 0; j < rows; j++) {
		for (int c = 0; c < cols; c++)
		{
			matrix[j][c] = rand() % 10;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	delete(matrix);
	system("color 6");
	system("pause");
	system("cls");
}