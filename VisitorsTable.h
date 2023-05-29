#ifndef VISITORSTABLE_H
#define VISITORSTABLE_H

#include <fstream>
#include <string>

struct Person {
    std::string name;
    std::string birth_date;
    int passport_number;
    std::string phone_number;
    std::string come_in;
    std::string come_out;
    std::string room_type;
    int amount;
    int room_number;
};

class VisitorsTable {
public:
    void readTable();                            // Function to read and display the contents of the visitors table
    void addVisitor();                           // Function to add a new visitor to the table
    void deletePerson(const std::string& name);   // Function to delete a visitor from the table based on their name
};

#endif