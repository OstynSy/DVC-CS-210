//Ostyn Sy
//1661304
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class playlist {
public:
	void print();
	playlist(string initSong = "", string initArtist="");
private:
	string song;
	string artist;
};

playlist::playlist(string initSong, string initArtist) {
	song = initSong;
	artist = initArtist;
}

void playlist::print()
{
	cout << "Title:" << this->song << "| " << "Artist: " << this->artist << endl;
}

void printall(vector<playlist*> playlist)
{
	for (int i = 0; i < playlist.size(); i++)
	{
		cout << i << ".";
		(*playlist.at(i)).print();
		cout << endl;
	}
}


int main() 
{
	vector<playlist*> builtplaylist;
	string songTitle, artistName;
	int choice, number;

	playlist* newsong = nullptr;
	playlist* temp = nullptr;


	do
	{
		cout << endl;
		cout << "-----Main Menu-----" << endl;
		cout << "1. Add Song & Artist" << endl;
		cout << "2. Remove Song & Artist" << endl;
		cout << "3. Print List" << endl;
		cout << "4. Exit" << endl;
		cout << endl;

		cout << "Select an option:";
		cin >> choice;
		cout << endl;

		switch (choice)
		{

		case 1:
		{
			cout << "Song Title:";
			cin >> songTitle;
			cout << "Artist Name:";
			cin >> artistName;
			cout << endl;
			newsong = new playlist(songTitle, artistName);
			builtplaylist.push_back(newsong);
		}
		break;

		case 2:
		{
			cout << "Choose a Song #: ";
			cin >> number;

			if (number < builtplaylist.size())
			{
				cout << "Song #"<<number<< "Removed." << endl;
				temp = builtplaylist.at(number);
				delete temp;
				builtplaylist.erase(builtplaylist.begin() + number);
			}
		}
		break;

		case 3:
		{
			printall(builtplaylist);
		}
		break;
		}
	} while (choice != 4);
		return 0;
}