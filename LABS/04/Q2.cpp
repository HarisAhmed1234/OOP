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
    
    Books() : name(""), author(""), isbn(""), total_pages(1000), pages_read(0) {}

    // Setter methods
    void setName(const string& newName) {
        name= newName;
    }

    void setAuthor(const string& newAuthor) {
        author= newAuthor;
    }

    void setIsbn(const string& newIsbn) {
        isbn= newIsbn;
    }

    void setTotalPages(int newTotalPages) {
        total_pages =newTotalPages;
    }

    void setPagesRead(int newPagesRead) {
        pages_read= newPagesRead;
    }

    //mthod for read
    void read() {
        if (pages_read < total_pages) {
            pages_read++;
            cout<< "Page parh lia hai tumne agay barho. Page number: "<< pages_read<<endl;
        } else {
            cout<<"Book khatam ho gayi hai!" <<endl;
        }
    }

    // Method to display 
    void showBookInfo() const {
        cout<< "Name:" <<name <<endl;
        cout<< "Author:"<< author<< endl;
        cout<<"ISBN: " <<isbn <<endl;
        cout <<"Total Pages:"<< total_pages<<endl;
        cout<<"Pagess Read: "<<pages_read<<endl;
    }
};

int main() {
    Books book1;
    book1.setName("LORD OF THE RINGS");
    book1.setAuthor("HARIS AHMED");
    book1.setIsbn("1234");

    // Display book information
    cout << "Book Information:" << endl;
    book1.showBookInfo();

    // ReaDing pages
    book1.read();
    book1.read();
    book1.read();
    book1.read();
    book1.read();

    return 0;
}
