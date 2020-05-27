//OstynSy
//username & password
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class HashTable
{
private:
	string index[11];
	char ch;
	int temp = 0;
	int val = 0;

public:
	HashTable();
	HashTable(string u, string p);
	string Index(string u, string p);
	void print();
	string user, pass;
};

HashTable::HashTable()
{
}

HashTable::HashTable(string u, string p)
{
	user = u;
	pass = p;
}

string HashTable::Index(string u, string p)
{



	for (int i = 0;i < u.length();i++)
	{
		ch = u.at(i);
		temp = (int)ch + temp;
	}
	val = temp % 11;


	index[val] = {"Username: "+ u + " | Password: "+ p };
	return index[val];
}

void HashTable::print()
{
	for (int i = 0;i < 11;i++)
	{
		cout << index[i] << endl;
	}
}

int main()
{
	HashTable test;

	test.Index("Andy", "awesome");
	test.Index("Bella", "boring");
	test.Index("Cindy", "casual");
	test.Index("Daphney", "drought");
	test.Index("Ellie", "Estastic");
	test.Index("Franklin", "Frown");
	test.Index("Gordon", "Golem");
	test.Index("Henry", "Hat");
	test.Index("Iggy", "Interesting");
	test.Index("Jordan", "JackyChan");

	test.print();
	return 0;
}

