// 12.14: CommissionEmployee.cpp
// Class CommissionEmployee member-function definitions.
#include <iostream>
#include <stdexcept>
#include "CommissionEmployeev.h" // CommissionEmployee class definition
using namespace std;

// constructor
CommissionEmployee::CommissionEmployee( 
   const string &first, const string &last, const string &ssn, 
   double sales, double rate )
   : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{
   setGrossSales( sales ); // validate and store gross sales
   setCommissionRate( rate ); // validate and store commission rate
}
void CommissionEmployee::setFirstName( const string &first )
{
   firstName = first; // should validate
}

string CommissionEmployee::getFirstName() const
{
   return firstName;
}

void CommissionEmployee::setLastName( const string &last )
{
   lastName = last; // should validate
}

string CommissionEmployee::getLastName() const
{
   return lastName;
}

void CommissionEmployee::setSocialSecurityNumber( const string &ssn )
{
   socialSecurityNumber = ssn; // should validate
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
   return getCommissionRate() * getGrossSales();
}

void CommissionEmployee::print() const
{
   cout << "commission employee: " 
      << getFirstName() << ' ' << getLastName() 
      << "\nsocial security number: " << getSocialSecurityNumber() 
      << "\ngross sales: " << getGrossSales() 
      << "\ncommission rate: " << getCommissionRate();
}
