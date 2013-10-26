// Fig. 12.2
// Aiming a derived-class pointer at a base-class object.
//#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee3.h"

int main()
{
   CommissionEmployee commissionEmployee( 
      "Sue", "Jones", "222-22-2222", 10000, .06 );
   BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = nullptr;

   // aim derived-class pointer at base-class object
   // Error: a CommissionEmployee is not a BasePlusCommissionEmployee
   basePlusCommissionEmployeePtr = &commissionEmployee;
} // end main

