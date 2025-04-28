#include "Library.h"
#include <iostream>
using namespace std;

void Library::addBook(const Book& book) {
    books.push_back(book);
}

bool Library::removeBook(const string& isbn) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getISBN() == isbn) {
            books.erase(it);
            return true;
        }
    }
    return false;
}

Book* Library::findBookByTitle(const string& title) {
    for (auto& book : books) {
        if (book.getTitle() == title) {
            return &book;
        }
    }
    return nullptr;
}

Book* Library::findBookByAuthor(const string& author) {
    for (auto& book : books) {
        if (book.getAuthor() == author) {
            return &book;
        }
    }
    return nullptr;
}

void Library::displayBooks() const {
    for (const auto& book : books) {
        cout << "Title: " << book.getTitle()
             << ", Author: " << book.getAuthor()
             << ", Year: " << book.getYear()
             << ", ISBN: " << book.getISBN()
             << endl;
    }
}
