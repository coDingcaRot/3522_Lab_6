//
// Created by jyim3 on 2022-10-19.
//

#pragma once

#include "Item.hpp"
#include <iostream>
using namespace std;

/*
    Represents a single book in a library which is identified through
    it's call number.
*/
class Book: public Item{

public:
    /*
    :param call_num: a string
    :param title: a string
    :param num_copies: an int
    :param author: a string
    :precondition call_num: a unique identifier
    :precondition num_copies: a positive integer
    */
    Book(string call_num, string title, int num_copies, string author);
    ~Book() override = default;

    void print(ostream& os) const override;
};
