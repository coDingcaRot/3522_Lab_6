//Name: Jonathaniel Alipes
//Student# : A01308318

#include <iostream>
#include "library.hpp"
#include "Item.hpp"

/*
Return a list of books with dummy data.
:return: a vector of book pointers
*/
vector<Item *> generate_test_books() {
    vector<Item *> Item_list;
    Item_list.push_back(new Book("100.200.300", "Harry Potter 1", 2, "J K Rowling"));
    Item_list.push_back(new Book("999.224.854", "Harry Potter 2", 5, "J K Rowling"));
    Item_list.push_back(new Book("631.495.302", "Harry Potter 3", 4, "J K Rowling"));
    Item_list.push_back(new Book("123.02.204", "The Cat in the Hat", 1, "Dr. Seuss"));
    return Item_list;
}



//Creates a library with dummy data and prompts the user for input.
int main() {
    vector<Item *>Item_list = generate_test_books();
    Library mylib(Item_list);
    mylib.display_library_menu();
    
    //is Item_list causing a memory leak?
    return 0;
}
