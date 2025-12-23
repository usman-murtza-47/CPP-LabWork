#include <iostream>
using namespace std;

class Book {
public:
    int bookID;
    string title;
    string author;
    float price;

    void input() {
        cout << "\nEnter Book ID: ";
        cin >> bookID;

        cout << "Enter Title: ";
        cin >> title;

        cout << "Enter Author Name: ";
        cin >> author;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nBook ID: " << bookID;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nPrice: ₹" << price << endl;
    }
};

void searchByAuthor(Book books[], int n, string searchAuthor) {
    bool found = false;

    cout << "\n\nBooks written by " << searchAuthor << ":\n";

    for (int i = 0; i < n; i++) {
        if (books[i].author == searchAuthor) {
            books[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << "\nNo books found by this author.\n";
    }
}

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    Book books[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Book " << i + 1 << "\n";
        books[i].input();
    }

    string authorName;
    cout << "\n\nEnter author name to search: ";
    cin >> authorName;

    searchByAuthor(books, n, authorName);

    return 0;
}