#include "includes/Book.h"
#include <time.h>
#include <iostream>
#include <vector>

#define BOOK_COUNT 10

int genIsbn(){
    srand(time(NULL));
    return (rand() % 999999) + 100000;
}

void printLibrary(std::vector<Book>& library){
    std::cout << "-------------------------------------------------------------------------------------\n";
    for (int i = 0; i < library.size(); i++){
        std::cout << "Title: " << library[i].getTitle() << " Author: " << library[i].getAuthor() << " ISBN: " << library[i].getIsbn() << " Availability: " << (library[i].getIsBorrowed() ? "Borrowed" : "Available") << '\n';
    }
    std::cout << "-------------------------------------------------------------------------------------\n";
}

//Compile using g++ -o program_name main.cpp includes/library.cpp
int main(){
    std::vector<Book> library;

    Book book1("Echoes of Eternity", "Ariana Winter", genIsbn(), false);
    Book book2("The Last Horizon", "Leo Cartwright", genIsbn(), false);
    Book book3("Whispers in the Wind", "Isabella Sinclair", genIsbn(), false);
    Book book4("Midnight Reverie", "Ethan Drake", genIsbn(), false);
    Book book5("The Enchanted Compass", "Lila Monroe", genIsbn(), false);
    Book book6("Beneath the Starry Sky", "Jameson Blake", genIsbn(), false);
    Book book7("The Forgotten Realm", " Sophie Turner", genIsbn(), false);
    Book book8("Secrets of the Ancient City", "Lucas Hart", genIsbn(), false);
    Book book9("The Quantum Maze", "Madison Lane", genIsbn(), false);
    Book book10("Lullabies of the Lost", "Owen Pierce", genIsbn(), false);

    std::cout << "Books made!\n";

    library.push_back(book1);
    library.push_back(book2);
    library.push_back(book3);
    library.push_back(book4);
    library.push_back(book5);
    library.push_back(book6);
    library.push_back(book7);
    library.push_back(book8);
    library.push_back(book9);
    library.push_back(book10);

    std::cout << "                                Current library:\n";
    printLibrary(library);


    return 0;
}