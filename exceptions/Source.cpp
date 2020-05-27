//Ostyn Sy
//1661304
#include <iostream>
using namespace std;

int main()
{

	int total=0;
	int x;
	do
	{
		try
		{	
			cout << "How many cookies do you want to put in the jar?" << endl;
			cin >> x;
			cout << "You tried putting " << x << " cookies in the jar." << endl;

			if (x > 25)
			{
				throw 1;
			}

			if (x <= 0)
			{
				throw true;
			}
			cout << "Hey, the " << x << " cookies fit in the jar!" << endl;
			cout << endl;
			total = x + total;
		}
		catch (int y)
		{
			cout << "Gah, I can't fit that many cookies! Try putting less cookies in!" << endl;
			cout << endl;
		}

		catch (bool a)
		{
			cout << "How am I supposed to put my non-existent cookies in here...Try putting more cookies in!" << endl;
			cout << endl;
		}

		catch (...)
		{
			cout << "Now, we can't put some weird stuff in our cookie jar!" << endl;
			cout << endl;
		}
	} while (total < 25);
	cout << "-------------------------" << endl;
	cout << "The jar is full!!!!" << endl;
	cout << endl;
	system("pause");
	return 0;
}
