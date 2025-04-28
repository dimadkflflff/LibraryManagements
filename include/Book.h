#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;
    string isbn;

public:
    Book(const string& title, const string& author, int year, const string& isbn);

    string getTitle() const;
    string getAuthor() const;
    int getYear() const;
    string getISBN() const;

    void setTitle(const string& title);
    void setAuthor(const string& author);
    void setYear(int year);
    void setISBN(const string& isbn);

    bool operator==(const Book& other) const;
};

#endif
