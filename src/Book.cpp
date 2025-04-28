#include "Book.h"
using namespace std;

Book::Book(const string& title, const string& author, int year, const string& isbn)
    : title(title), author(author), year(year), isbn(isbn) {}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}

string Book::getISBN() const {
    return isbn;
}

void Book::setTitle(const string& title) {
    this->title = title;
}

void Book::setAuthor(const string& author) {
    this->author = author;
}

void Book::setYear(int year) {
    this->year = year;
}

void Book::setISBN(const string& isbn) {
    this->isbn = isbn;
}

bool Book::operator==(const Book& other) const {
    return isbn == other.isbn;
}
