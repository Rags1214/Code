/**
 * Author: Chris Rangnow
 * Date:10-26-17
 * FileName: AddressBookInheritance
 * Purpose: COP2350C Module 4
 */

#include <string>
#include "Person.h"

using namespace std;

Person::Person() {
}

Person::Person(int idIn, string firstNameIn, string lastNameIn, int ageIn, long phoneIn, int employerType, string employerName, long employerPhone)
{    
    try {
        PersonalInfo *newInfo = new PersonalInfo(idIn, firstNameIn, lastNameIn, ageIn, phoneIn);

        info = newInfo;
    } catch (std::exception e) {
        throw "Could not add the new contact to the Address Book";
    }
    
    try {
        SalesEmployer *salesEmp = new SalesEmployer();
        ServiceEmployer *serviceEmp = new ServiceEmployer();
        ManufacturingEmployer *manufacturingEmp = new ManufacturingEmployer();

        switch (employerType) {
            case 1:
                employer = salesEmp;
                break;

            case 2:
                employer = serviceEmp;
                break;

            case 3:
                employer = manufacturingEmp;
                break;
        }

        employer->setName(employerName);
        employer->setPhone(employerPhone);
        
    } catch (std::exception e) {
        throw "Could not add the new contact to the Address Book";
    }
}

Person::Person(const Person& orig) {
}

Person::~Person() {
}

int Person::getId() const
{
    return info->getId();
}

string Person::getFirstName() const
{
    return info->getFirstName();
}

string Person::getLastName() const
{
    return info->getLastName();
}

int Person::getAge() const
{
    return info->getAge();
}

long Person::getPhone() const
{
    return info->getPhone();
}

void Person::setId(int idIn)
{
    info->setId(idIn);
};

void Person::setFirstName(std::string firstNameIn)
{
    info->setFirstName(firstNameIn);
};

void Person::setLastName(std::string lastNameIn)
{
    info->setLastName(lastNameIn);
};

void Person::setAge(int ageIn)
{
    info->setAge(ageIn);
};

void Person::setPhone(long phoneIn)
{
    info->setPhone(phoneIn);
};

int Person::getEmployerId() const
{
    return employer->getId();
}

string Person::getEmployerName() const
{
    return employer->getName();
}

long Person::getEmployerPhone() const
{
    return employer->getPhone();
}

void Person::setEmployer(Employer *employerIn)
{
    employer = employerIn;
};
