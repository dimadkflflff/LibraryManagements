#include <iostream>
#include <string>
#include "Library.h"
using namespace std;

int main() {
    Library library;
    int choice;
    string title, author, isbn;
    int year;

    do {
        // Displaying menu
        cout << "\nMenu:\n";
        cout << "1. Add a book\n";
        cout << "2. Remove a book\n";
        cout << "3. Search a book by title\n";
        cout << "4. Search a book by author\n";
        cout << "5. Display all books\n";
        cout << "6. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1: // Add a book
            cout << "Enter book title: ";
            cin.ignore(); // Clear buffer
            getline(cin, title);
            cout << "Enter author: ";
            getline(cin, author);
            cout << "Enter year of publication: ";
            cin >> year;
            cout << "Enter ISBN: ";
            cin >> isbn;
            library.addBook(Book(title, author, year, isbn));
            cout << "Book added!\n";
            break;

        case 2: // Remove a book
            cout << "Enter ISBN of the book to remove: ";
            cin >> isbn;
            if (library.removeBook(isbn)) {
                cout << "Book removed!\n";
            } else {
                cout << "No book found with this ISBN.\n";
            }
            break;

        case 3: // Search for a book by title
            cout << "Enter book title: ";
            cin.ignore(); // Clear buffer
            getline(cin, title);
            Book* foundByTitle = library.findBookByTitle(title);
            if (foundByTitle) {
                cout << "Found: " << foundByTitle->getTitle() << " by " << foundByTitle->getAuthor() << endl;
            } else {
                cout << "No book found with this title.\n";
            }
            break;

        case 4: // Search for a book by author
            cout << "Enter author: ";
            cin.ignore(); // Clear buffer
            getline(cin, author);
            Book* foundByAuthor = library.findBookByAuthor(author);
            if (foundByAuthor) {
                cout << "Found: " << foundByAuthor->getTitle() << " by " << foundByAuthor->getAuthor() << endl;
            } else {
                cout << "No book found by this author.\n";
            }
            break;

        case 5: // Display all books
            cout << "All books list:\n";
            library.displayBooks();
            break;

        case 6: // Exit
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6); // Continue until the user chooses to exit

    return 0;
}
