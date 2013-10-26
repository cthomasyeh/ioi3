// 12.5: BasePlusCommissionEmployee.h
// BasePlusCommissionEmployee class derived from class 
// CommissionEmployee.
#include <string> // C++ standard string class
#include "CommissionEmployeev.h" // CommissionEmployee class declaration

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( const std::string &, const std::string &, 
      const std::string &, double = 0.0, double = 0.0, double = 0.0 );
   
   void setBaseSalary( double ); // set base salary
   double getBaseSalary() const; // return base salary

   virtual double earnings() const override; // calculate earnings
   virtual void print() const override; // print object
private:
   double baseSalary; // base salary
}; // end class BasePlusCommissionEmployee

