#include <cstring> 
#include <iostream> 
#include <stack> 

using namespace std;



class node {
public:
	int x, y;
	int dir;

	node(int i, int j)
	{
		x = i;
		y = j;

		// Направление двжения  0 - вверх, 1 - налево
		// 2 - вниз, 3 - вправо
		// ставим на ноль
		dir = 0;
	}
};

// лабиринт строки, колонки
const int n = 4, m = 5;

// координаты цели
int fx, fy;
bool visited[n][m];


bool isReachable(int maze[n][m])
{
	// начинаем с верхнего левого угла (0, 0). 
	int i = 0, j = 0;

	stack<node> s;

	node temp(i, j);

	s.push(temp);

	while (!s.empty()) {

		// Изымаем элемент из стека и двигаемся
		// влево, вправо,вверх, вниз или откатываемся на одну позицию обратно 
	
		temp = s.top();
		int d = temp.dir;
		i = temp.x, j = temp.y;

		// Изменияем направление
		// и добавляем элемент в стек
		temp.dir++;
		s.pop();
		s.push(temp);
		
		// Если мы достигли желаемых координат,
		// то возвращаем true 
		if (i == fx and j == fy) {
			return true;
		}

		// Проверка направления вверх 
		if (d == 0) {
			if (i - 1 >= 0 and maze[i - 1][j] and
				visited[i - 1][j]) {
				node temp1(i - 1, j);
				visited[i - 1][j] = false;
				s.push(temp1);
			}
		}

		// Проверка направления налево
		else if (d == 1) {
			if (j - 1 >= 0 and maze[i][j - 1] and
				visited[i][j - 1]) {
				node temp1(i, j - 1);
				visited[i][j - 1] = false;
				s.push(temp1);
			}
		}

		// Проверка направления вниз
		else if (d == 2) {
			if (i + 1 < n and maze[i + 1][j] and
				visited[i + 1][j]) {
				node temp1(i + 1, j);
				visited[i + 1][j] = false;
				s.push(temp1);
			}
		}
		// Проверка направления вправо
		else if (d == 3) {
			if (j + 1 < m and maze[i][j + 1] and
				visited[i][j + 1]) {
				node temp1(i, j + 1);
				visited[i][j + 1] = false;
				s.push(temp1);
			}
		}

		// Если достигли тупика, то двигаемся в обратном направлении
	
		else {
			visited[temp.x][temp.y] = true;
			s.pop();
		}
		
	}

	
	// Если стек пуст
	// или не существует пути до цели, то возвращаем false
	return false;
}

 
int main()
{
	// первоначальная настройка массива, в котором будут храниться значения посещенных учатсков
	// в значение true (непосещено) 
	memset(visited, true, sizeof(visited));

	// Лабиринтик
	int maze[n][m] = {
		{ 1, 0, 1, 1, 0 },
		{ 1, 1, 1, 0, 1 },
		{ 0, 1, 0, 1, 1 },
		{ 1, 1, 1, 1, 1 }
	};

	// Координаты цели
	fx = 2;
	fy = 3;

	if (isReachable(maze)) {
		cout << "Path Found!" << '\n';
	}
	else
		cout << "No Path Found!" << '\n';
	

	system("pause");
}
