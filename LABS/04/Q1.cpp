#include <iostream>
#include <string>

using namespace std;

class Books {
private:
    string name;
    string author;
    string isbn;
    int total_pages;
    int pages_read;

public:
    Books() {
        name = "";
        author = "";
        isbn = "";
        total_pages = 0;
        pages_read = 0;
    }

    Books(string naam, string musanif, string aisbn, int totalpages, int pagesread) {
        name = naam;
        author = musanif;
        isbn = aisbn;
        total_pages = totalpages;
        pages_read = pagesread;
    }

    void read() {
        if (pages_read < total_pages) {
            pages_read++;
            cout << "Page parh lia hai tumne agay barho. Page number: "<<pages_read <<endl;
        } else {
            cout << "Book khatam ho gayi hai!"<<endl;
        }
    }
};

int main() {
    Books book1("LORD OF THE RINGS", "HARIS AHMED", "1234", 4, 0);
    book1.read(); 
    book1.read(); 
    book1.read(); 
    book1.read(); 
    book1.read(); 
    return 0;
}
