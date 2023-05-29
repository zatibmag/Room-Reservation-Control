#include <iostream>
#include <string>
#include "VisitorsTable.h"

using namespace std;

int main() {
    VisitorsTable visitorsTable;
    int answer = 0;
    while (answer != 4) {
        cout << endl << "What do you want?\n 1. Register a visitor\n 2. Check all visitors\n 3. Delete a visitor\n 4. Exit" << endl;
        cin >> answer;
        if (answer == 1) {
            visitorsTable.addVisitor();
        }
        else if (answer == 2) {
            visitorsTable.readTable();
        }
        else if (answer == 3) {
            string name;
            cout << "Enter the name of the person to delete: ";
            cin.ignore();
            getline(cin, name);
            visitorsTable.deletePerson(name);
        }
    }
    return 0;
}