/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */

#ifndef FIRSTSERGEANT_H
#define FIRSTSERGEANT_H

#include <string>
#include "Marine.h"

using namespace std;

class FirstSergeant: public Marine {
public:
    FirstSergeant(string nameIn);
    FirstSergeant(const FirstSergeant& orig);
    virtual ~FirstSergeant();
private:

};

#endif /* FIRSTSERGEANT_H */