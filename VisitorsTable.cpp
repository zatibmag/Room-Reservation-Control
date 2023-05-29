#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "VisitorsTable.h"

using namespace std;

void VisitorsTable::readTable() {
    ifstream file("visitors.txt");
    string data;
    while (getline(file, data)) {
        cout << data << endl;
    }
    file.close();
}

void VisitorsTable::addVisitor() {
    Person person;
    ofstream file("visitors.txt", ios::app);
    cout << "Write the name and surname: ";
    cin.ignore();
    getline(cin, person.name);
    cout << "Write the birth date: ";
    cin >> person.birth_date;
    cout << "Write the passport number: ";
    cin >> person.passport_number;
    cout << "Write the phone number: ";
    cin.ignore();
    getline(cin, person.phone_number);
    cout << "Write the check-in date: ";
    cin >> person.come_in;
    cout << "Write the check-out date: ";
    cin >> person.come_out;
    cout << "Write the type of room: ";
    cin.ignore();
    getline(cin, person.room_type);
    cout << "Write the amount: ";
    cin >> person.amount;
    cout << "Write the room number: ";
    cin >> person.room_number;
    file << left << setw(17) << person.name << " / "
        << setw(13) << person.birth_date << " / "
        << setw(14) << person.passport_number << " / "
        << setw(12) << person.phone_number << " / "
        << setw(11) << person.come_in << " / "
        << setw(9) << person.come_out << " / "
        << setw(12) << person.room_type << " / "
        << setw(6) << person.amount << " / "
        << setw(6) << person.room_number << " / " << endl;
    file.close();
}

void VisitorsTable::deletePerson(const string& name) {
    ifstream inputFile("visitors.txt");
    ofstream tempFile("temp.txt");
    string data;
    bool personFound = false;

    while (getline(inputFile, data)) {
        if (data.find(name) == string::npos) {
            tempFile << data << endl;
        }
        else {
            personFound = true;
        }
    }

    inputFile.close();
    tempFile.close();

    if (!personFound) {
        cout << "Person not found." << endl;
        remove("temp.txt");
    }
    else {
        remove("visitors.txt");
        rename("temp.txt", "visitors.txt");
        cout << "Person deleted." << endl;
    }
}