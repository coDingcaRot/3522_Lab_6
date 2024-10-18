//
// Created by Jonathaniel Alipes on 10/16/2024.
//
#pragma once

#include "Item.hpp"
#include <vector>
#include <limits>
#include "Item.hpp"
#include "LibraryItemGenerator.hpp"
using namespace std;

//works with maintaining lists of items
class Catalogue {
private:
    vector<Item *> item_list;


public:
    Catalogue(vector<Item*> item_list) : item_list(item_list) {};
    ~Catalogue() = default;

    void clean_cin();
    vector<Item *> get_item_list() {
        return item_list;
    }
        /*
     A private method that encapsulates the retrieval of an item with
     the given call number from the library.
     :param call_number: a string
     :return: item pointer
     */
    Item * retrieve_item_by_call_number(string call_number);

    /*
    Find items with the same title.
    :param title: a string
    :return: a vector of item pointers.
    */
    vector<Item *> find_items(string title);

    /*
    Add a brand new item to the library with a unique call number.
    */
    void add_item();

    /*
    Remove an existing item from the library
            :param call_number: a string
            :precondition call_number: a unique identifier
    */
    void remove_item(string call_number);


        /*
    Decrement the item count for an item with the given call number
            in the library.
    :param call_number: a string
    :precondition call_number: a unique identifier
            :return: True if the item was found and count decremented, false
    otherwise.
    */
    bool reduce_item_count(string call_number);

    /*
    Increment the item count for an item with the given call number
            in the library.
    :param call_number: a string
    :precondition call_number: a unique identifier
            :return: True if the item was found and count incremented, false
    otherwise.
    */
    bool increment_item_count(string call_number);
};


