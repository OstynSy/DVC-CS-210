//Ostyn Sy
//1661304
#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int const v= 5;
int dist[v];
bool vertex[v];
int graph[v][v] = { { 0, 5, 0, 0, 4},
					{ 5, 0, 6, 7, 0},
					{ 0, 6, 0, 8, 0},
					{ 0, 7, 8, 0, 5},
					{ 4, 0, 0, 5, 0} };

void print()
{
	int total = 0;
	cout << "vertex" << endl;

	for (int i = 0;i < v-1;i++)
	{
		cout << i << setw(20)<<dist[i]<<endl;
		total = dist[i]+total;
	}
	cout << "total:" << setw(16) << total << endl;;
}

void dijkstra(int graph[v][v])
{
	for (int j = 0;j < v;j++)
	{
		vertex[j] = false;
	}

	int min = numeric_limits<int>::max();

	for (int i = 0;i < v; i++)
	{
		min = numeric_limits<int>::max();
		for (int j = 0;j < v;j++)
		{
			if (graph[i][j] != 0)
			{
				if (graph[i][j] <= min && vertex[i] == false)
				{
					min=graph[i][j];
					dist[i] = min;
				}
			}
		}		
		vertex[i] = true;
	}
	print();
}



int main()
{
	dijkstra(graph);


	system("Pause");
	return 0;
}