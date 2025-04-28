#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;
    std::string isbn;

public:
    Book(const std::string& title, const std::string& author, int year, const std::string& isbn);

    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
    std::string getISBN() const;

    void setTitle(const std::string& title);
    void setAuthor(const std::string& author);
    void setYear(int year);
    void setISBN(const std::string& isbn);

    bool operator==(const Book& other) const;
};

#endif
