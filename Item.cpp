//
// Created by Jonathaniel Alipes on 10/16/2024.
//

#include "Item.hpp"


Item::Item(string call_num, string title, int num_copies, string author):
    call_num(call_num), title(title), num_copies(num_copies), author(author){}

bool Item::check_availability() const {
    return num_copies > 0;
}