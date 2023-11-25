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

// using Procedures:
void readInfo(stPatient &PatientInfo)
{
    // Personal Info:
    cout << "========================\n";
    cout << "Personal Info\n";
    cout << "========================\n";
    cout << "First Name: ";
    cin >> PatientInfo.name.firstName;
    cout << "Last Name: ";
    cin >> PatientInfo.name.lastName;
    cout << "Age: ";
    cin >> PatientInfo.age;

    // cout << "Gander (0) For Male (1) For Female: ";
    // cin >> PatientInfo.gender;

    // Birth Date Info
    cout << "========================\n";
    cout << "Birth Date\n";
    cout << "========================\n";
    cout << "Day: ";
    cin >> PatientInfo.birthDate.day;
    cout << "Month: ";
    cin >> PatientInfo.birthDate.month;
    cout << "Year: ";
    cin >> PatientInfo.birthDate.year;

    // Contact Info
    cout << "========================\n";
    cout << "Contact Info\n";
    cout << "========================\n";
    cout << "Phone: ";
    cin >> PatientInfo.contact.phone;
    cout << "E-Mail: ";
    cin >> PatientInfo.contact.e_mail;

    // Address Info
    cout << "========================\n";
    cout << "Address Info\n";
    cout << "========================\n";
    cout << "Street Name: ";
    cin >> PatientInfo.address.streetName;
    cout << "City: ";
    cin >> PatientInfo.address.city;
    cout << "Capital: ";
    cin >> PatientInfo.address.capital;
    cout << "ZipCode: ";
    cin >> PatientInfo.address.zipCode;

    // more info
    cout << "========================\n";
    cout << "More Info\n";
    cout << "========================\n";
    // cout << "Marital Status: ";
    // cin >> PatientInfo.maritalStatus;
    cout << "Height: ";
    cin >> PatientInfo.Height;
    cout << "Weight: ";
    cin >> PatientInfo.Weight;

    // Patient's relative info
    cout << "========================\n";
    cout << "Patient's relative info\n";
    cout << "========================\n";
    cout << "First Name: ";
    cin >> PatientInfo.patientRelative.name.firstName;
    cout << "Last Name: ";
    cin >> PatientInfo.patientRelative.name.lastName;
    cout << "Relative Relation: ";
    cin >> PatientInfo.patientRelative.relativeRelation;
    cout << "Phone: ";
    cin >> PatientInfo.patientRelative.contact.phone;
    cout << "E-Mail: ";
    cin >> PatientInfo.patientRelative.contact.e_mail;
}

void printInfo(stPatient PatientInfo)
{
    cout << "\n================================================\n";
    cout << "================ Patient Info =================\n";
    cout << "=|Name: " << PatientInfo.name.firstName + " " + PatientInfo.name.lastName << "\n";
    cout << "=|Age: " << PatientInfo.age << "\n";
    cout << "=|BirthDay: " << PatientInfo.birthDate.day << "/" << PatientInfo.birthDate.month << "/" << PatientInfo.birthDate.year << "\n";
    cout << "=|Address: " << PatientInfo.address.streetName << ", " << PatientInfo.address.city << ", " << PatientInfo.address.capital << " " << PatientInfo.address.zipCode << " zip\n";
    cout << "=|Phone: " << PatientInfo.contact.phone << "\n";
    cout << "=|E-Mail: " << PatientInfo.contact.e_mail << "\n";
    cout << "=|Height: " << PatientInfo.Height << "\t=|Weight: " << PatientInfo.Weight << endl;
    cout << "\n========== Patient's Relative Info ==========\n";
    cout << "=|Name: " << PatientInfo.patientRelative.name.firstName + " " + PatientInfo.patientRelative.name.lastName << "\n";
    cout << "=|Phone: " << PatientInfo.contact.phone << "\n";
    cout << "=|E-Mail: " << PatientInfo.contact.e_mail << "\n";
    cout << "================================================" << endl;
}

// main file
int main()
{
    // create new patient
    stPatient patientOne;
    readInfo(patientOne);
    printInfo(patientOne);
    return 0;
}