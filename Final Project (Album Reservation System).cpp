// Final Project (Reservation System)
// Name: Nathania Kezia Barakati
// ID: 2001586331
// Major/Batch: Computer Science / 2020
// This program is for an album store worker to reserve an album that a customer has reserved.



#include <iostream>
#include <string>
using namespace std;

class Album
{	
	string mtitle;
	string martist;
	string mgenre;
	string morder[50];
	int myear;
	int mbatch;
	
	public :
	//constructor
	album()
	{
		mtitle = "";
		martist = "";
		mgenre = "";
		myear = 0;
		mbatch = 0;
	}
	// To set and get album info
	void setAlbum(string stitle, string sartist, string sgenre, int syear)
	{
		mtitle = stitle;
		martist = sartist;
		mgenre = sgenre;
		myear = syear;
	}
	void getAlbumInfo()
	{
		cout << "Title: " << mtitle << endl;
		cout << "Artist: " << martist << endl;
		cout << "Genre: " << mgenre << endl;
		cout << "Year: " << myear << endl;
	}
	// To add reservation
	void addReservation(string name)
	{
		if(mbatch < 50)
		{
			morder[mbatch] = name;
			mbatch++;
		}
		else 
		{
			cout << "Sorry, this batch is full. Please wait for another batch" << endl;
		}
	}
	
	void getReservationInfo()
	{
		for(int i = 0 ; i < mbatch ; i++)
		{
			cout << " Slot number " << (i+1) << " is reserved for " <<morder [i] << endl;
		}
	}
	int getReservationTotal()
	{
		return mbatch;
	}
};


int main()
{
	Album salbum[50];
	int option;
	int totalAlbum;
	
	do // Go back to the main menu after finishing one of the option
	{
		cout << "************************************************** ALBUM RESERVATION **************************************************";
		cout << "\n\n\t\t\t\t\t\t\tMenu" << endl;
		cout << "\n1. Input Album Information" << endl;
		cout << "\n2. Reservation" << endl;
		cout << "\n3. Reservation Status" << endl;
		cout << "\n4. Show Album Information" << endl;
		cout << "\n5. Exit" << endl;
		cout << "\n\nPlease enter your choice : ";
		cin >> option;
		
		if(option == 1)
		{
			string stitle, sartist, sgenre;
			int syear;
			cout << "\nInput Title : ";
			cin >> stitle;
			cout << "Input Artist : ";
			cin >> sartist;
			cout << "Input Genre : ";
			cin >> sgenre;
			cout << "Input Year : ";
			cin >> syear;
			
			//salbum[totalalbum]();
			salbum[totalAlbum].setAlbum(stitle, sartist, sgenre, syear);
			cout << "\nAlbum Created" << endl;			
		}
		
		else if(option == 2)
		{
			int chooseAlbum;
			cout << "\nInput Album Number : ";
			cin >> chooseAlbum;
			
			int totalReservation;
			cout << "Input total reservation: ";
			cin >> totalReservation;
			
			if((totalReservation + salbum[chooseAlbum - 1].getReservationTotal()) > 50)
			{
				cout<<"We only have 50 slot."<<endl;
			}
			else
			{
				for(int i = 0 ; i < totalReservation ; i++)
				{
					string name;
					cout << "Input customer's name for slot number " << (i+1) << ": ";
					cin >> name;
					salbum[chooseAlbum].addReservation(name);
					cout << "Reservation success" << endl;
				}
			}
			cout << "Reservation Done" << endl;
		}
		
		else if(option == 3)
		{
			int chooseAlbum;
			cout << "Input Album number: ";
			cin >> chooseAlbum;
			salbum[chooseAlbum].getReservationInfo();
		}
		
		else if(option == 4)
		{
			int chooseAlbum;
			cout << "Input Album number: ";
			cin >> chooseAlbum;
			salbum[chooseAlbum].getAlbumInfo();
		}
		
		cout<<endl;
		
	} while (option < 6);
	
	cout<<"System finished"<<endl;
	
}















