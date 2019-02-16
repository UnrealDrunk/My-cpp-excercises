#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//Обьявление матрицы
	int rows = 24; int cols = 20;
	int **arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	///////////////////////////////

	//Заполнение матрицы значениями из файла
	string path = "matrix.txt";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Error! File was not opened" << endl;
	}
	else {

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				fin >> arr[i][j];
			}
		}
	}
	fin.close();

	///////////////////////////////

	//Вывод матрицы
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	///////////////////////////////////

	system("pause");
	return 0;
}
