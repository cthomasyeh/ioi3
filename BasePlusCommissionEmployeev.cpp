// 12.15: BasePlusCommissionEmployee.cpp
// Class BasePlusCommissionEmployee member-function definitions.
#include <iostream>
#include "BasePlusCommissionEmployeev.h"
using namespace std;

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee( 
   const string &first, const string &last, const string &ssn, 
   double sales, double rate, double salary ) 
   // explicitly call base-class constructor
   : CommissionEmployee( first, last, ssn, sales, rate )
{
   setBaseSalary( salary ); // validate and store base salary
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
   return getBaseSalary() + CommissionEmployee::earnings();
}
void BasePlusCommissionEmployee::print() const
{
   cout << "base-salaried ";

   // invoke CommissionEmployee's print function
   CommissionEmployee::print();
   cout << "\nbase salary: " << getBaseSalary();
}


