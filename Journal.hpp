//
// Created by Jonathaniel Alipes on 10/16/2024.
//

#pragma once

#include "Item.hpp"
using namespace std;

/*
 * Represents a single DVD in a library
 */
class Journal: public Item {
private:
    string issue_number;
    string publisher;
public:
    /*
    :param call_num: a string
    :param title: a string
    :param num_copies: an int
    :param author: a string
    :precondition call_num: a unique identifier
    :precondition num_copies: a positive integer
    */
    Journal(string call_num, string title, int num_copies, string author, string issue_num, string publisher);
    ~Journal() override = default;

    string get_issue_number() const {
        return issue_number;
    }
    string get_publisher() const {
        return publisher;
    }

    void print(ostream& os) const override;
};



