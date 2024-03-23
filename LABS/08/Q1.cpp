#include <iostream>
using namespace std;

class Book{
public:
	string Title;
	string Author;
	string Publisher;
	Book(string title, string author, string publisher){
		Title=title;
		Author=author;
		Publisher=publisher;
	}
	void BookDisplay(){
		cout<<"Title: "<<Title<<endl;
		cout<<"Author: "<<Author<<endl;
		cout<<"Publisher: "<<Publisher<<endl;
	}
};

class FictionBook: public Book{
	public:
	string Genre;
	string Protagonist;
	FictionBook(string title, string author, string publisher,string genre,string protagonist):
		Book(title,author,publisher){
			Genre=genre;
			Protagonist=protagonist;
		}
		void FictionBookDisplay(){
		cout<<"Title: "<<Title<<endl;
		cout<<"Author: "<<Author<<endl;
		cout<<"Publisher: "<<Publisher<<endl;
		cout<<"Genre: "<<Genre<<endl;
		cout<<"Protagonist: "<<Protagonist<<endl;
		
	}
};

int main(){
	 cout<<"-Haris Ahmed BsAi 23k6005-"<<endl;
   	 cout<<endl;
	FictionBook book1("HERE IS 2024","Haris","Ali","Thriller","Haris");
	book1.FictionBookDisplay();
}
