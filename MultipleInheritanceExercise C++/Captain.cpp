/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */

#include "Captain.h"
#include <iostream>

using namespace std;

Captain::Captain(string nameIn): Marine() {
    name = nameIn;
    cout << nameIn << " is a Captain" << endl;
}

Captain::Captain(const Captain& orig) {
}

Captain::~Captain() {
}
