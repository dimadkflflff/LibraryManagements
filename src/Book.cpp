#include "Book.h"

Book::Book(const std::string& title, const std::string& author, int year, const std::string& isbn)
    : title(title), author(author), year(year), isbn(isbn) {}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}

std::string Book::getISBN() const {
    return isbn;
}

void Book::setTitle(const std::string& title) {
    this->title = title;
}

void Book::setAuthor(const std::string& author) {
    this->author = author;
}

void Book::setYear(int year) {
    this->year = year;
}

void Book::setISBN(const std::string& isbn) {
    this->isbn = isbn;
}

bool Book::operator==(const Book& other) const {
    return isbn == other.isbn;
}
