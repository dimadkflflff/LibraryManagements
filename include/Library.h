#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
using namespace std;

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book);
    bool removeBook(const string& isbn);
    Book* findBookByTitle(const string& title);
    Book* findBookByAuthor(const string& author);
    void displayBooks() const;
};

#endif
