#include <cstdlib>
#include <iostream>
#include <string>

#include "LeggedMammal.h"
#include "Person.h"
#include "Polygon.h"
#include "_pause.h"

using namespace std;

int main() {
    LeggedMammal cat;
    cat.mNumberOfLegs = 4;
    cat.mKindOfFur = "short";
    cat.mPresenceOfTail = true;

    Person p;
    p.mName = "Yuta Asakura";
    p.mAddress = "Tokyo";
    p.mGender = "Male";
    p.mAge = 28;
    p.mOccupation = "Software Engineer";

    Polygon tri;
    tri.mName = "Triangle";
    tri.mNumberOfSides = 3;
    tri.mColor = "Red";

    cout << "LeggedMammal\n";
    cout << "Legs: " << cat.mNumberOfLegs << "\n";
    cout << "Fur: " << cat.mKindOfFur << "\n";
    cout << "Has tail: " << (cat.mPresenceOfTail ? "Yes" : "No") << "\n\n";

    cout << "Person\n";
    cout << "Name: " << p.mName << "\n";
    cout << "Address: " << p.mAddress << "\n";
    cout << "Gender: " << p.mGender << "\n";
    cout << "Age: " << p.mAge << "\n";
    cout << "Occupation: " << p.mOccupation << "\n\n";

    cout << "Polygon\n";
    cout << "Name: " << tri.mName << "\n";
    cout << "Sides: " << tri.mNumberOfSides << "\n";
    cout << "Color: " << tri.mColor << "\n";

    // Required by course template
    _pause();
    return EXIT_SUCCESS;
}