//
// Created by jyim3 on 2022-10-19.
//

#include "book.hpp"

Book::Book(string call_num, string title, int num_copies, string author) :
    Item(call_num, title, num_copies, author) {}

void Book::print(ostream& os) const {
    os << "---- Item: " << this->get_title() << " ----" << endl
    << "Call Number: " << this->get_call_number() << endl
    << "Number of Copies: " << this->get_num_copies() << endl
    << "Author: " << this->get_author() << endl;
}


