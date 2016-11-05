// Final Project (Reservation System)
// Name: Nathania Kezia Barakati
// ID: 2001586331
// Major/Batch: Computer Science / 2020
// This program is for an album store worker to reserve an album that a customer has reserved.
// How it works: The worker will input the album information with the option install.
// When the worker wants to input a reservation they will choose the reservation option.
// If the worker wants to check the reservation of the album they will choose the show reservation option


#include <iostream>
#include <string>
#include <conio.h>
#include <cstdio>
using namespace std;

static int a = 0;
class b

{
	public:
	char albumname[20], artistname[20], genre[10], releasetime[10], slot[8][5][10];
	void install();
	void show();
	void available();
}

album[20];

void vline(char ch) 

{

  for (int i=0 ; i>0 ; i--)

  cout << ch;

}

void b::install()
{
  cout<<"\nAlbum Name: ";
  cin>>album[a].albumname;

  cout<<"\nArtist: ";
  cin>>album[a].artistname;

  cout<<"\nRelease Time: ";
  cin>>album[a].releasetime;
  
  cout<<"\nGenre: ";
  cin>>album[a].genre;
  
  album[a].available();

  a++;
}

/*void a::quota()

{

  int slot;

  char number[5];

  top:

  cout<<"\nAlbum title: ";

  cin>>number;

  int n;

  for(n=0 ; n<=p ; n++)

  {
    if(strcmp(album[n].albumname, number) == 0)
    break;
  }
  
  while(n <= p)
  {
    cout<<"Slot: ";
    cin >> slot;

    if(slot > 50)
    {
      cout<<"\nThis batch is full. We only have 50 slot per batch. Please wait for the next batch!" << endl;
    }

    else
    {
    if (strcmp(album[n].slot[slot / 5][(slot % 5) - 1], "The slot is available") ==0)
      {
        cout<<"Enter customer name (Full Name): ";
        cin>>album[n].slot[slot / 5][(slot % 5) - 1];
        
        break;
      }

    else
      cout<<"The slot is unavailable. Please try another slot\n";
      }
      }
      
    if(n > p)
    {
      cout<<"We only have 50 slot per batch. Please enter a slot number below 50\n";
      goto top;
    }

  }
*/






