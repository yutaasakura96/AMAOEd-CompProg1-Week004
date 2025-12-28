#include <cstdlib>
#include <iostream>
#include <string>

#include "Dog.h"
#include "Student.h"
#include "_pause.h"

using namespace std;

int main()
{
    // ************************** DOG OBJECT **************************
    // Instantiate Dog object using constructor
    Dog myDog(4, "short and fluffy", true, "Golden Retriever", "Large", true);

    // Display Dog properties using accessors
    cout << "=== DOG OBJECT ===" << endl;
    cout << "Number of Legs: " << myDog.mNumberOfLegs << endl;
    cout << "Kind of Fur: " << myDog.mKindOfFur << endl;
    cout << "Presence of Tail: " << (myDog.mPresenceOfTail ? "Yes" : "No") << endl;
    cout << "Breed: " << myDog.getBreed() << endl;
    cout << "Size: " << myDog.getSize() << endl;
    cout << "Is Registered: " << (myDog.getIsRegistered() ? "Yes" : "No") << endl;
    cout << endl;

    // Modify Dog properties using mutators
    myDog.setBreed("Labrador Retriever");
    myDog.setSize("Medium");
    myDog.setIsRegistered(false);

    // Display modified Dog properties
    cout << "=== MODIFIED DOG OBJECT ===" << endl;
    cout << "Breed: " << myDog.getBreed() << endl;
    cout << "Size: " << myDog.getSize() << endl;
    cout << "Is Registered: " << (myDog.getIsRegistered() ? "Yes" : "No") << endl;
    cout << endl;

    // ************************** STUDENT OBJECT **************************
    // Instantiate Student object using constructor
    Student myStudent("Yuta Asakura", "Imus, Cavite", "Male", 21, "Student",
                      "BS Computer Science", 2, "De La Salle University");

    // Display Student properties using accessors
    cout << "=== STUDENT OBJECT ===" << endl;
    cout << "Name: " << myStudent.mName << endl;
    cout << "Address: " << myStudent.mAddress << endl;
    cout << "Gender: " << myStudent.mGender << endl;
    cout << "Age: " << myStudent.mAge << endl;
    cout << "Occupation: " << myStudent.mOccupation << endl;
    cout << "Academic Program: " << myStudent.getAcademicProgram() << endl;
    cout << "Year in College: " << myStudent.getYearInCollege() << endl;
    cout << "Enrolled University: " << myStudent.getEnrolledUniversity() << endl;
    cout << endl;

    // Modify Student properties using mutators
    myStudent.setAcademicProgram("BS Information Technology");
    myStudent.setYearInCollege(3);
    myStudent.setEnrolledUniversity("Polytechnic University of the Philippines");

    // Display modified Student properties
    cout << "=== MODIFIED STUDENT OBJECT ===" << endl;
    cout << "Academic Program: " << myStudent.getAcademicProgram() << endl;
    cout << "Year in College: " << myStudent.getYearInCollege() << endl;
    cout << "Enrolled University: " << myStudent.getEnrolledUniversity() << endl;
    cout << endl;

    // Required by course template
    _pause();
    return EXIT_SUCCESS;
}