//
// Created by Jonathaniel Alipes on 10/17/2024.
//

#include "LibraryItemGenerator.hpp"

Item * LibraryItemGenerator::generateItem() {
cout << "Select item type to add:" << endl;
    cout << "1. Book" << endl;
    cout << "2. Journal" << endl;
    cout << "3. DVD" << endl;

    int choice;
    cin >> choice;

    string call_number, title, author, publisher, release_date, region_code, issue_number;
    int num_copies;

    switch (choice)
    {
        case 1:
            cout << "Enter Call Number: ";
            cin >> call_number;

            cout << "Enter Title: ";
            cin.ignore();
            getline(cin, title);

            cout << "Enter Number of Copies: ";
            cin >> num_copies;

            cout << "Enter Author: ";
            cin.ignore();
            getline(cin, author);
            return new Book(call_number, title, num_copies, author);
        case 2:
            cout << "Enter Call Number: ";
            cin >> call_number;

            cout << "Enter Title: ";
            cin.ignore();
            getline(cin, title);

            cout << "Enter Number of Copies: ";
            cin >> num_copies;

            cout << "Enter Author: ";
            cin.ignore();
            getline(cin, author);

            cout << "Enter Issue Number: ";
            cin >> issue_number;

            cout << "Enter Publisher: ";
            cin.ignore();
            getline(cin, publisher);
            return new Journal(call_number, title, num_copies, author, issue_number, publisher);
        case 3:
            cout << "Enter Call Number: ";
            cin >> call_number;

            cout << "Enter Title: ";
            cin.ignore();
            getline(cin, title);

            cout << "Enter Number of Copies: ";
            cin >> num_copies;

            cout << "Enter Author: ";
            cin.ignore();
            getline(cin, author);

            cout << "Enter Release Date:";
            cin >> release_date;

            cout << "Enter Region Code: ";
            cin.ignore();
            getline(cin, region_code);
            return new DVD(call_number, title, num_copies, author, release_date, region_code);
        default:
            cout << "Invalid choice!" << endl;
            return nullptr;
    }
}