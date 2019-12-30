/**
 * Author: Chris Rangnow
 * Date:10-26-17
 * FileName: AddressBookInheritance
 * Purpose: COP2350C Module 4
 */

#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <string>

class Employer {
public:
    explicit Employer();
    explicit Employer(const Employer& orig);
    virtual ~Employer();

    int getId() const;
    std::string getName() const;
    long getPhone() const;

    void setName(std::string nameIn);
    void setPhone(long phoneIn);

private:
    int id;
    std::string name;
    long phone;
};

#endif /* EMPLOYER_H */
