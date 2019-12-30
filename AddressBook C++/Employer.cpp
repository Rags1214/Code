/**
 * Author: Chris Rangnow
 * Date:10-26-17
 * FileName: AddressBookInheritance
 * Purpose: COP2350C Module 4
 */

#include <string>
#include "Employer.h"

using namespace std;

Employer::Employer() {
}

Employer::Employer(const Employer& orig) {
}

Employer::~Employer() {
}

int Employer::getId() const
{
    return id;
}

string Employer::getName() const
{
    return name;
}

long Employer::getPhone() const
{
    return phone;
}

void Employer::setName(std::string nameIn)
{
    name = nameIn;
};

void Employer::setPhone(long phoneIn)
{
    phone = phoneIn;
};