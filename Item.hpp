//
// Created by Jonathaniel Alipes on 10/16/2024.
//

#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>
#include <iostream>
using namespace std;

class Item {
    private:
        string call_num;
        string title;
        int num_copies;
        string author;
    public:
        virtual ~Item() = default;
        Item(string call_num, string title, int num_copies, string author);
        /*
        Returns the title of the Item
        :return: a string
        */
        string get_title() const {
            return title;
        }

        /*
        Returns the author of the Item
        :return: a string
        */
        string get_author() const {
            return author;
        }

        /*
         Returns the call number of the Item
         :return a string
         */
        string get_call_number() const {
            return call_num;
        }

        /*
         Increments the number of copies of an Item
         */
        void increment_number_of_copies() {
            num_copies += 1;
        }

        /*
         Decrements the number of copies of an Item
         */
        void decrement_number_of_copies() {
            num_copies -= 1;
        };

        /*
         Returns the number of copies that are available for this
         specific Item.
         :return: an int
         */
        int get_num_copies() const {
            return num_copies;
        };

        /*
        Returns True if the Item is available and False otherwise
                :return: A Boolean
        */
        bool check_availability() const;

        virtual void print(ostream& os) const = 0;
        friend ostream& operator<<(ostream& os, const Item& item) {
            item.print(os);
            return os;
        }
};



#endif //ITEM_HPP
