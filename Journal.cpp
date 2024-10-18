//
// Created by Jonathaniel Alipes on 10/16/2024.
//

#include "Journal.hpp"

Journal::Journal(string call_num, string title, int num_copies, string author, string issue_number, string publisher)  :
    Item(call_num, title, num_copies, author), issue_number(issue_number), publisher(publisher) {}

void Journal::print(ostream& os) const {
    os << "---- Journal: " << this->get_title() << " ----" << endl
    << "Call Number: " << this->get_call_number() << endl
    << "Number of Copies: " << this->get_num_copies() << endl
    << "Author: " << this->get_author() << endl
    << "Issue Number: " << this->get_issue_number() << endl
    << "Publisher Number: " << this->get_publisher() << endl;
}
