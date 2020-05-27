//Ostyn Sy
//1661304
#include <iostream>
#include <string>
using namespace std;

class Musicians
{
protected:
	void String()
	{
		string stringarr[5] = { "veena", "guitar", "sitar", "sarod", "mandolin" };
		for (unsigned int i = 0; i < 5; i++)
		{
			cout << stringarr[i]<< ", ";
		}
	}

	void wind()
	{
		string windarr[5] = {"flute","clarinet", "saxophone", "nadhaswaram", "piccolo"};
		for (unsigned int i = 0; i < 5; i++)
		{
			cout << windarr[i]<<", ";
		}
	}

	void perc()
	{
		string percarr[5] = {"tabla","mridangam","bangos","drums","tambour"};
		for (unsigned int i = 0; i < 5; i++)
		{
			cout << percarr[i]<<", ";
		}
	}
};

class TypeIns : Musicians
{

public:

	char choice;
	void get()
	{
		cout << "Type of instruments to be displayed" << endl;
		cout << "a. String instruments" << endl;
		cout << "b. Wind instruments" << endl;
		cout << "c. Percussion instruments" << endl;
		cin >> choice;
	}

	void show()
	{
		if (choice == 'a')
		{
			String();
		}

		else if (choice == 'b')
		{
			wind();
		}

		else
		{
			perc();
		}
	}
};

int main()
{
	TypeIns play;
	play.get();
	play.show();

	return 0;
}