#include "Book.h"
#include <iostream>

Book::Book(std::string title, std::string author, int isbn, bool isBorrowed) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    this->isBorrowed = isBorrowed;
}

std::string Book::getTitle() {
    return this->title;
}

std::string Book::getAuthor() {
    return this->author;
}

int Book::getIsbn() {
    return this->isbn;
}

bool Book::getIsBorrowed() {
    return this->isBorrowed;
}

void Book::checkout() {
    if (this->isBorrowed) {
        std::cout << "This book is already borrowed" << std::endl;
    } else {
        this->isBorrowed = true;
    }
}

void Book::returnBook() {
    if (this->isBorrowed) {
        this->isBorrowed = false;
    } else {
        std::cout << "This book is already in stock" << std::endl;
    }
}


// int genIsbn(){
//     srand(time(0));
//     return (rand() % 999999) + 100000;
// }

// int main(){
//     Book book1("Echoes of Eternity", "Ariana Winter", genIsbn(), false);
//     Book book2("The Last Horizon", "Leo Cartwright", genIsbn(), false);
//     Book book3("Whispers in the Wind", "Isabella Sinclair", genIsbn(), false);
//     Book book4("Midnight Reverie", "Ethan Drake", genIsbn(), false);
//     Book book5("The Enchanted Compass", "Lila Monroe", genIsbn(), false);
//     Book book6("Beneath the Starry Sky", "Jameson Blake", genIsbn(), false);
//     Book book7("The Forgotten Realm", " Sophie Turner", genIsbn(), false);
//     Book book8("Secrets of the Ancient City", "Lucas Hart", genIsbn(), false);
//     Book book9("The Quantum Maze", "Madison Lane", genIsbn(), false);
//     Book book10("Lullabies of the Lost", "Owen Pierce", genIsbn(), false);

//     std::cout << "Books made!";

//     return 0;
// }
