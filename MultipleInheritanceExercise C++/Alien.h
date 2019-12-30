/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */

#ifndef ALIEN_H
#define ALIEN_H

#include <string>

using namespace std;

class Alien {
public:
    Alien();
    Alien(const Alien& orig);
    virtual ~Alien();

protected:
    string race;

};

#endif /* ALIEN_H */
