#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    Library library;

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925, "1234567890");
    Book book2("1984", "George Orwell", 1949, "0987654321");

    library.addBook(book1);
    library.addBook(book2);

    cout << "All books:" << endl;
    library.displayBooks();

    cout << "\nSearching for book by title '1984':" << endl;
    Book* found = library.findBookByTitle("1984");
    if (found) {
        cout << "Found: " << found->getTitle() << " by " << found->getAuthor() << endl;
    } else {
        cout << "Book not found." << endl;
    }

    cout << "\nRemoving book with ISBN 1234567890:" << endl;
    if (library.removeBook("1234567890")) {
        cout << "Book removed." << endl;
    } else {
        cout << "Book not found." << endl;
    }

    cout << "\nAll books after removal:" << endl;
    library.displayBooks();

    return 0;
}
