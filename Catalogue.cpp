//
// Created by Jonathaniel Alipes on 10/16/2024.
//

#include "Catalogue.hpp"


//works with maintaining lists of Items



void Catalogue::clean_cin() {
    cin.clear(); //clearing out bad bits
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); //clearing garbage in buffer
}

Item * Catalogue::retrieve_item_by_call_number(string call_number)
{
    Item* found_item = nullptr;
    for (Item * library_Item : item_list)
    {
        if (library_Item->get_call_number() == call_number)
        {
            found_item = library_Item;
            break;
        }
    }
    return found_item;
}

vector<Item *> Catalogue::find_items(string title) {
    vector<Item *> title_list;
    for (Item * library_Item : item_list) {
        if(title == library_Item->get_title()) {
            title_list.push_back(library_Item);
        }
    }
    return title_list;
}

void Catalogue::add_item() {
    LibraryItemGenerator gen;
    Item * new_Item = gen.generateItem();

    bool found_item = retrieve_item_by_call_number(new_Item->get_call_number());
    if (found_item)
        cout << "Could not add Item with call number " << new_Item->get_call_number()
             << ". It already exists. ";
    else {
        item_list.push_back(new_Item);
        cout << "Item added successfully! Item details:" << endl;
        cout << *new_Item;
    }
}

void Catalogue::remove_item(string call_number) {
    Item * found_item = retrieve_item_by_call_number(call_number);
    if (found_item != nullptr)
    {
        cout << "Successfully removed " << found_item->get_title() <<
        " with call number: " << found_item->get_call_number() << endl;

        for (size_t i=0; i<item_list.size(); i++) {
            if(item_list[i] == found_item)
            {
                item_list.erase(item_list.begin() + i);
                break;
            }
        }
        delete found_item;
    }
    else {
        cout << "Item with call number: " << call_number << " not found." << endl;
    }
}

bool Catalogue::reduce_item_count(string call_number) {
    Item * library_Item = retrieve_item_by_call_number(call_number);
    if (library_Item != nullptr) {
        library_Item->decrement_number_of_copies();
        return true;
    }
    return false;
}

bool Catalogue::increment_item_count(string call_number) {
    Item * library_Item = retrieve_item_by_call_number(call_number);
    if (library_Item != nullptr) {
        library_Item->increment_number_of_copies();
        return true;
    }
    return false;
}

