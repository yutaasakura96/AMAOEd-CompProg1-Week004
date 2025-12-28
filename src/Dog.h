#ifndef _DOG_H
#define _DOG_H

#include <string>
#include "LeggedMammal.h"

using namespace std;

class Dog : public LeggedMammal
{
    private:
        string mBreed;
        string mSize;
        bool mIsRegistered;

    public:
        // Constructor that initializes parent class properties and Dog properties
        Dog(int numberOfLegs, string kindOfFur, bool presenceOfTail, 
            string breed, string size, bool isRegistered)
        {
            mNumberOfLegs = numberOfLegs;
            mKindOfFur = kindOfFur;
            mPresenceOfTail = presenceOfTail;
            mBreed = breed;
            mSize = size;
            mIsRegistered = isRegistered;
        }

        // Accessors (getters)
        string getBreed()
        {
            return mBreed;
        }

        string getSize()
        {
            return mSize;
        }

        bool getIsRegistered()
        {
            return mIsRegistered;
        }

        // Mutators (setters)
        void setBreed(string breed)
        {
            mBreed = breed;
        }

        void setSize(string size)
        {
            mSize = size;
        }

        void setIsRegistered(bool isRegistered)
        {
            mIsRegistered = isRegistered;
        }
};

#endif