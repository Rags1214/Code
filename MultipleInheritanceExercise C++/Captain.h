/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */


#ifndef CAPTAIN_H
#define CAPTAIN_H

#include <string>
#include "Marine.h"

using namespace std;

class Captain: public Marine {
public:
    Captain(string nameIn);
    Captain(const Captain& orig);
    virtual ~Captain();
private:

};

#endif /* CAPTAIN_H */