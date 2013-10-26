// 11.5: CommissionEmployee.cpp
#include <iostream>
#include <stdexcept>
#include "CommissionEmployee1.h"
using namespace std;

// constructor
CommissionEmployee::CommissionEmployee( 
   const string &first, const string &last, const string &ssn, 
   double sales, double rate )
{
   firstName = first; // should validate
   lastName = last; // should validate
   socialSecurityNumber = ssn; // should validate
   setGrossSales( sales ); // validate and store gross sales
   setCommissionRate( rate ); // validate and store commission rate
}

void CommissionEmployee::setFirstName( const string &first )
{
   firstName = first;
}

string CommissionEmployee::getFirstName() const
{
   return firstName;
}

void CommissionEmployee::setLastName( const string &last )
{
   lastName = last;
}

string CommissionEmployee::getLastName() const
{
   return lastName;
}

void CommissionEmployee::setSocialSecurityNumber( const string &ssn )
{
   socialSecurityNumber = ssn;
}
string CommissionEmployee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;
}
void CommissionEmployee::setGrossSales( double sales )
{
   grossSales = sales;
}
double CommissionEmployee::getGrossSales() const
{
   return grossSales;
}
void CommissionEmployee::setCommissionRate( double rate )
{
   commissionRate = rate;

}
double CommissionEmployee::getCommissionRate() const
{
   return commissionRate;
}
double CommissionEmployee::earnings() const
{
   return commissionRate * grossSales;
}
void CommissionEmployee::print() const
{
   cout << "commission employee: " << firstName << ' ' << lastName 
      << "\nsocial security number: " << socialSecurityNumber 
      << "\ngross sales: " << grossSales 
      << "\ncommission rate: " << commissionRate;
}