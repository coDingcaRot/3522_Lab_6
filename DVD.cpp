//
// Created by Jonathaniel Alipes on 10/16/2024.
//

#include "DVD.hpp"
DVD::DVD(string call_num, string title, int num_copies, string author, string release_date, string region_code) :
    Item(call_num, title, num_copies, author), release_date(release_date), region_code(region_code) {}

void DVD::print(ostream& os) const {
    os << "---- Book: " << this->get_title() << " ----" << endl
    << "Call Number: " << this->get_call_number() << endl
    << "Number of Copies: " << this->get_num_copies() << endl
    << "Author: " << this->get_author() << endl
    << "Release Date: " << this->get_release_date() << endl
    << "Region Code: " << this->get_region_code() << endl;
}
