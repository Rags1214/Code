/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */


#ifndef SERGEANTMAJOR_H
#define SERGEANTMAJOR_H

#include <string>
#include "Marine.h"

using namespace std;

class SergeantMajor: public Marine {
public:
    SergeantMajor(string nameIn);
    SergeantMajor(const SergeantMajor& orig);
    virtual ~SergeantMajor();
private:

};

#endif /* SERGEANTMAJOR_H */

