#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    bool removeBook(const std::string& isbn);
    Book* findBookByTitle(const std::string& title);
    Book* findBookByAuthor(const std::string& author);
    void displayBooks() const;
};

#endif
