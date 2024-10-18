//
// Created by Jonathaniel Alipes on 10/16/2024.
//

#pragma once

#include "Item.hpp"
using namespace std;


/*
 * Represents a single DVD in a library
 */
class DVD: public Item {
    private:
        string release_date;
        string region_code;
public:
    /*
    :param call_num: a string
    :param title: a string
    :param num_copies: an int
    :param author: a string
    :precondition call_num: a unique identifier
    :precondition num_copies: a positive integer
    */
    DVD(string call_num, string title, int num_copies, string author, string release_date, string region_code);
    ~DVD() override = default;

    string get_release_date() const{
        return release_date;
    }
    string get_region_code() const{
        return region_code;
    }

    void print(ostream& os) const override;
};
