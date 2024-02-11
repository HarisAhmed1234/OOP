#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
    string genre;
};

void displayBook(const Book& b) {
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Year: " << b.year << endl;
    cout << "Genre: " << b.genre << endl;
    cout << endl;
}

void findBook(const Book books[], int num, const string& keyword) {
    bool found = false;
    for (int i = 0; i < num; ++i) {
        if (books[i].title == keyword || books[i].author == keyword) {
            displayBook(books[i]);
            found = true;
        }
    }
    if (!found) {
        cout << "Book with title or author \"" << keyword << "\" not found." << endl;
    }
}

int main() {
    const int MAX_BOOKS = 100;
    Book library[MAX_BOOKS];
    int numBooks = 0;

    char choice;
    do {
        cout << "Enter book details:" << endl;
        cout << "Title: ";
        getline(cin, library[numBooks].title);
        cout << "Author: ";
        getline(cin, library[numBooks].author);
        cout << "Year: ";
        cin >> library[numBooks].year;
        cin.ignore(); // Ignore newline character
        cout << "Genre: ";
        getline(cin, library[numBooks].genre);

        numBooks++;

        cout << "Do you want to add another book? (y/n): ";
        cin >> choice;
        cin.ignore();
    } while (choice == 'y' || choice == 'Y');

    cout << "\nLibrary Inventory:\n";
    for (int i = 0; i < numBooks; ++i) {
        displayBook(library[i]);
    }

    string keyword;
    cout << "\nEnter title or author to search: ";
    getline(cin, keyword);
    findBook(library, numBooks, keyword);

    return 0;
}
