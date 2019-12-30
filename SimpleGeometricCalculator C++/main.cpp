/* 
 * Author: Chris Rangnow
 * Created: July 8, 2017
 * FileName: SimpleGeometricCalculator1.cpp
 * Purpose: Module 1 assignment
 * Input: none
 * Output: Side and area of a triangle
 * Exceptions: none
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    int length1 = 3;
    int length2 = 4;
    int area1 = 0;
    double length3 = 0.0;
    double length4 = 0.0;
    double area2 = 0.0;
    
    area1 = (length1 * length2) / 2;
    cout << "The sides of the triangle measure " << length1 << " and " <<length2 << ". The area is " << area1 << "." << endl;
    
    length3 = length1 * 5.0;
    length4 = length2 * 5.0;
    area2 = (length3 * length4) / 2;
    std::cout << std::fixed << std::setprecision (1) << "The sides of the triangle measure " << length3 << " and " << length4 << ". The area is " << area2 << "." << std::endl;
    
    return 0;
}

