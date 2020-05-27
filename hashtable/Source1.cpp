#include "Header.h"

HashTable::HashTable()
{

}

HashTable::HashTable(string inituser, string initpass)
{
	user = inituser;
	pass = initpass;
}

void HashTable::hashCode(string u, string p)
{
	char ch;
	int temp = 0;
	int val = 0;
	string comb;

	for (int i = 0; i < u.length();i++)
	{
		ch = u.at(i);
		temp = (int)ch + val;
	}
	val = temp % 11;
	comb = "user: " + u + " pass: " + p;
	index[val] = { comb };
}

void HashTable::print()
{
	cout << "user: " << this->user << " pass: " << this->pass << endl;
	
}