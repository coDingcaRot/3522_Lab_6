//
// Created by jyim3 on 2022-10-19.
//

#pragma once

#include <vector>
#include <sstream>
#include "book.hpp"
#include "Catalogue.hpp"

using namespace std;
/*
The Library consists of a list of books and provides an
interface for users to check out, return and find books.
*/
class Library {

    Catalogue catalogue;

public:
    /*
    Intialize the library with a list of books.
    :param book_list: a vector of book pointers
    */
    Library(vector<Item *> book_list) : catalogue(book_list) {}
    ~Library() = default;

    /*
    Check out a book with the given call number from the library.
    :param call_number: a string
    :precondition call_number: a unique identifier
    */
    void check_out(string call_number);

    /*
    Return an book with the given call number from the library.
    :param call_number: a string
    :precondition call_number: a unique identifier
    */
    void return_item(string call_number);

    /*
    Display the library menu allowing the user to either access the
    list of books, check out, return, find, add, remove a book.
    */
    void display_library_menu();


    //Display all the books in the library.
    void display_available_items();

};
