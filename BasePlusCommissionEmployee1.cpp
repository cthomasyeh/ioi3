// 11.8: BasePlusCommissionEmployee.cpp

#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee1.h" // class definition
using namespace std;

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee( 
   const string &first, const string &last, const string &ssn, 
   double sales, double rate, double salary )
{
   firstName = first; // should validate
   lastName = last; // should validate
   socialSecurityNumber = ssn; // should validate
   setGrossSales( sales ); // validate and store gross sales
   setCommissionRate( rate ); // validate and store commission rate
   setBaseSalary( salary ); // validate and store base salary
}
void BasePlusCommissionEmployee::setFirstName( const string &first )
{
   firstName = first; // should validate
}
string BasePlusCommissionEmployee::getFirstName() const
{
   return firstName;
}
void BasePlusCommissionEmployee::setLastName( const string &last )
{
   lastName = last; // should validate
}
string BasePlusCommissionEmployee::getLastName() const
{
   return lastName;
}
void BasePlusCommissionEmployee::setSocialSecurityNumber( 
   const string &ssn )
{
   socialSecurityNumber = ssn; // should validate
}
string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;
}
void BasePlusCommissionEmployee::setGrossSales( double sales )
{
  
   grossSales = sales;
   
}
double BasePlusCommissionEmployee::getGrossSales() const
{
   return grossSales;
}
void BasePlusCommissionEmployee::setCommissionRate( double rate )
{
   commissionRate = rate;
}
double BasePlusCommissionEmployee::getCommissionRate() const
{
   return commissionRate;
}
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
   baseSalary = salary;
}
double BasePlusCommissionEmployee::getBaseSalary() const
{
   return baseSalary;
}
double BasePlusCommissionEmployee::earnings() const
{
   return baseSalary + ( commissionRate * grossSales );
}
void BasePlusCommissionEmployee::print() const
{
   cout << "base-salaried commission employee: " << firstName << ' ' 
      << lastName << "\nsocial security number: " << socialSecurityNumber 
      << "\ngross sales: " << grossSales 
      << "\ncommission rate: " << commissionRate 
      << "\nbase salary: " << baseSalary;
}


