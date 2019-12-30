/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */

#include "Sergeant.h"
#include <iostream>

using namespace std;

Sergeant::Sergeant(string nameIn): Marine() {
    name = nameIn;
    cout << nameIn << " is a Sergeant" << endl;
}

Sergeant::Sergeant(const Sergeant& orig) {
}

Sergeant::~Sergeant() {
}