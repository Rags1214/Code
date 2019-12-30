/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */

#include "FirstSergeant.h"
#include <iostream>

using namespace std;

FirstSergeant::FirstSergeant(string nameIn): Marine() {
    name = nameIn;
    cout << nameIn << " is a First Sergeant" << endl;
}

FirstSergeant::FirstSergeant(const FirstSergeant& orig) {
}

FirstSergeant::~FirstSergeant() {
}