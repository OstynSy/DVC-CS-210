//ostyn Sy
//1661304
using namespace std;
#include <iostream>

void print();
void mergesort(int l, int r);
void merge(double a[], int l, int m, int r);

double a[33] = 
{ 
	65.84,35.24,8.84,55.62,70.48,20.00,60.00,66.48,46.81,65.64,
	65.50,65.64,81.61,65.81,35.21,84.21,94.58,72.64,28.64,84.66,
	84.69,54.64,32.22,21.00,51.00,35.11,38.46,38.84,99.71,31.55,
	54.66,11.11,54.61
};//array of grades
int main()
{
	
	cout << "Before Merge Sort:" << endl;
	print();

	cout << "After Merge Sort:" << endl;
	mergesort(0, 32);
	print();

	return 0;
}
 

void print()
{
	for (int i = 0; i < 33; i++)
	{
		cout << a[i] << ", ";
	}

	cout << endl;
	cout << endl;
}

void merge(double a[], int l, int m, int r)
{
	double temp[100];
	int m2 = m + 1;
	int i = l;
	int j = r;
	int k = 0;

	while ((i <= m) && (m2 <= j))
	{
		if (a[i] < a[m2])
		{
			temp[k++] = a[i++];
		}

		else
		{
			temp[k++] = a[m2++];
		}
	}

	while (i <= m)
	{
		temp[k++] = a[i++];
	}

	while (m2 <= j)
	{
		temp[k++] = a[m2++];
	}

	for (i = l, m2 = 0; i <= j; i++, m2++)
	{

		a[i] = temp[m2];
	}
}


void mergesort(int l, int r)
{
	int m;
	if (l < r)
	{
		m = (l + r) / 2;
		mergesort(l, m);
		mergesort(m + 1, r);
		merge(a, l, m, r);
	}
	else
	{
		return;
	}

}

