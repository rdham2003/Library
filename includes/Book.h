#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
    private:
        std::string title;
        std::string author;
        int isbn;
        bool isBorrowed;

    public:
        Book(std::string title, std::string author, int isbn, bool isBorrowed);
        std::string getTitle();
        std::string getAuthor();
        int getIsbn();
        bool getIsBorrowed();
        void checkout();
        void returnBook();
};

#endif
