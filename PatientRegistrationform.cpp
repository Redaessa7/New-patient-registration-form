/*
    Project Name: Patient Registration Form
    Create By: Reda Essa
    Data: 11/24/2023
    techs: C++ , Structures , Enums

*/

#include <iostream>
using namespace std;

// Enums:
enum enGender
{
    Male,
    Female
};
enum enMaritalStatus
{
    Single,
    Married,
    Divorced
};

// Structures:
struct stName
{
    string firstName;
    string lastName;
};

struct stBirthDate
{
    short day;
    short month;
    short year;
};

struct stContactInfo
{
    string phone;
    string e_mail;
};

struct stAddress
{
    string streetName;
    string city, capital;
    short zipCode;
};

struct stPatientRelative
{
    stName name;
    string relativeRelation;
    stContactInfo contact;
};

// Main Structure Patient
struct stPatient
{
    stName name;
    stBirthDate birthDate;
    stAddress address;
    stContactInfo contact;
    stPatientRelative patientRelative;
    enGender gender;
    enMaritalStatus maritalStatus;

    float Height, Weight;
    short age;
};

// main file
int main()
{
    // create new patient
    stPatient patientOne;

    // add data
    patientOne.name.firstName = "Reda";
    patientOne.name.lastName = "Essa";
    patientOne.age = 23;
    patientOne.gender = enGender::Male;
    // Birth Date Info
    patientOne.birthDate.day = 18;
    patientOne.birthDate.month = 7;
    patientOne.birthDate.year = 2000;
    // Contact Info
    patientOne.contact.phone = "01091645795";
    patientOne.contact.e_mail = "Redaessa27@gmail.com";
    // Address Info
    patientOne.address.streetName = "Sidi_Gaber St 303";
    patientOne.address.city = "Smoha";
    patientOne.address.capital = "Alix";
    patientOne.address.zipCode = 2245;
    // more info
    patientOne.maritalStatus = enMaritalStatus::Single;
    patientOne.Height = 156.5;
    patientOne.Weight = 85;
    // Patient's relative info
    patientOne.patientRelative.name.firstName = "Saied";
    patientOne.patientRelative.name.lastName = "Essa";
    patientOne.patientRelative.relativeRelation = "her Dad";
    patientOne.patientRelative.contact.phone = "012435043054";
    patientOne.patientRelative.contact.e_mail = "saiedessa@gmail.com";

    // print info
    cout << "Name: " << patientOne.name.firstName + " " + patientOne.name.lastName << endl;
    cout << "Gender: " << (patientOne.gender ? "Female" : "Male") << endl;
    return 0;
}