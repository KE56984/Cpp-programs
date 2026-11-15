#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copies;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter number of copies available: ";
        cin >> copies;
    }

    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "Book borrowed successfully." << endl;
        } else {
            cout << "Sorry, no copies available to borrow." << endl;
        }
    }

    void displayDetails() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies available: " << copies << endl;
    }
};

int main() {
    Book book1;

    cout << "=== Library Book Management System ===" << endl;

    book1.inputDetails();

    cout << "\nBook details entered:" << endl;
    book1.displayDetails();

    cout << "\nBorrowing a book..." << endl;
    book1.borrowBook();

    cout << "\nUpdated book details:" << endl;
    book1.displayDetails();

    return 0;
}
