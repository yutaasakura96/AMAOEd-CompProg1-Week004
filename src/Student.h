#ifndef _STUDENT_H
#define _STUDENT_H

#include <string>
#include "Person.h"

using namespace std;

class Student : public Person
{
    private:
        string mAcademicProgram;
        int mYearInCollege;
        string mEnrolledUniversity;

    public:
        // Constructor that initializes parent class properties and Student properties
        Student(string name, string address, string gender, int age, string occupation,
                string academicProgram, int yearInCollege, string enrolledUniversity)
        {
            mName = name;
            mAddress = address;
            mGender = gender;
            mAge = age;
            mOccupation = occupation;
            mAcademicProgram = academicProgram;
            mYearInCollege = yearInCollege;
            mEnrolledUniversity = enrolledUniversity;
        }

        // Accessors (getters)
        string getAcademicProgram()
        {
            return mAcademicProgram;
        }

        int getYearInCollege()
        {
            return mYearInCollege;
        }

        string getEnrolledUniversity()
        {
            return mEnrolledUniversity;
        }

        // Mutators (setters)
        void setAcademicProgram(string academicProgram)
        {
            mAcademicProgram = academicProgram;
        }

        void setYearInCollege(int yearInCollege)
        {
            mYearInCollege = yearInCollege;
        }

        void setEnrolledUniversity(string enrolledUniversity)
        {
            mEnrolledUniversity = enrolledUniversity;
        }
};

#endif