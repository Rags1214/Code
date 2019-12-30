/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */

#ifndef PRIVATE_H
#define PRIVATE_H

#include <string>
#include "Marine.h"

using namespace std;

class Private: public Marine {
public:
    Private(string nameIn);
    Private(const Private& orig);
    virtual ~Private();
private:

};

#endif /* PRIVATE_H */

