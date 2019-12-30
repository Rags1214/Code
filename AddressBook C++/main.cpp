/**
 * Author: Chris Rangnow
 * Date:10-26-17
 * FileName: AddressBookInheritance
 * Purpose: COP2350C Module 4
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Record.h"
#include "Person.h"

using namespace std;

const int ADDRESSBOOK_SIZE = 10; 


void printMainMenu() {
    cout << endl << "-----------------------------" << endl;
    cout << "Main Menu:" << endl;
    cout << "-----------------------------" << endl;
    cout << "1) Add new contact" << endl;
    cout << "2) List contacts" << endl;
    cout << "0) Exit program" << endl;
    cout << "Select an option > ";
}


void listContacts(vector<Person *> addressBook) {
    if (addressBook.empty()) {
        throw "There are no contacts to display";
    }
    
    cout << endl << "-------------------------------------------------------------------------------------" << endl;
    cout << "ID \tNAME \t\t\tAGE \tPHONE\t\tEMPLOYER" << endl;
    cout << "-------------------------------------------------------------------------------------" << endl;
    for (int i=0; i<addressBook.size(); i++) {
        Person* contact = addressBook[i];
        cout << contact->getId() << "\t";
        cout << contact->getLastName() << ", " << contact->getFirstName() << "\t\t";
        cout << contact->getAge() << "\t";
        cout << contact->getPhone() << "\t";
        cout << contact->getEmployerName() << " (" << contact->getEmployerPhone() << ")" << endl;
    }
    cout << "-------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << addressBook.size()  << " contacts" << endl;
}


void addContact(vector<Person *> &addressBook) {
    string fName, lName, employerName;
    int age;
    long phone, employerPhone;
    int employerChoice;
    bool employerOk = false;

    if (addressBook.size() >= ADDRESSBOOK_SIZE) {
        throw "Cannot add more contacts: The Address Book is full";
    }
    
    cout << endl << "Enter the data for the new contact: " << endl;

    
    cout << "Enter First Name: ";
    getline(cin, fName);
    cout << "Enter Last Name: ";
    getline(cin, lName);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Phone Number: ";
    cin >> phone;

    cin.ignore(); 

    do {
        cout << endl << "Available Employers: " << endl;
        cout << "1 - Sales" << endl;
        cout << "2 - Service" << endl;
        cout << "3 - Manufacturing" << endl;
        cout << "Select Employer: ";

        cin >> employerChoice;
        
        if (employerChoice >= 1 && employerChoice <= 3) {
            employerOk = true;
        } else {
            cout << endl << "Please select a valid Employer." << endl;
        }
    } while (!employerOk);
    
    cin.ignore(); 

    cout << "Enter Employer Name: ";
    getline(cin, employerName);
    cout << "Enter Employer Phone: ";
    cin >> employerPhone;

    
    try {
        Person *newEntry = new Person(addressBook.size() + 1, fName, lName, age, phone, employerChoice, employerName, employerPhone);

        
        addressBook.push_back(newEntry);
    } catch (std::exception e) {
        throw "Could not add the new contact to the Address Book";
    }

    cout << endl << "New contact added!" << endl;
    
    return;
}


int main(int argc, char** argv) {
    int choice;
    bool endProgram = false;
    
    
    vector<Person *> addressBook;

    while (!endProgram) {
        printMainMenu();
        
        cin >> choice;

        cin.ignore(); 
        
        switch (choice) {
            case 1:
                try {
                    
                    addContact(addressBook);
                } catch (const char* errorMessage) {
                    cout << endl << "[error] " << errorMessage << endl;
                }

                break;

            case 2:
                try {
                    
                    listContacts(addressBook);
                } catch (const char* errorMessage) {
                    cout << endl << "[error] " << errorMessage << endl;
                }

                break;
                
            case 0:
                endProgram = true;
                break;
                
            default:
                cout << endl << "[error] Invalid option selected. Try again." << endl;
        }
        
    }
    
    cout << endl << "Good bye!" << endl;
    
    return 0;
}