/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */


#ifndef SOLDIER_H
#define SOLDIER_H

#include <string>

using namespace std;

class Soldier {
public:
    Soldier();
    Soldier(const Soldier& orig);
    virtual ~Soldier();

protected:
    string name;

};

#endif /* SOLDIER_H */