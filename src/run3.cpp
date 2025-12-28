/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Payslip Calculator
 * @app desc: Calculate employee payslip with pay grade determination,
 *           overtime pay, and formatted output
 * @history:
 *  - 2025/12/28 | Yuta Asakura
 *      -- Created main program with input validation
 *      -- Implemented formatted output with Php prefix
 *      -- Added comma separators and 2 decimal places
 * ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include <string>
 #include <iomanip>
 #include <locale>
 #include "Payslip.h"
 #include "_pause.h"
 
 using namespace std;
 
 // Custom facet for thousand separators
 class comma_numpunct : public numpunct<char>
 {
 protected:
     virtual char do_thousands_sep() const { return ','; }
     virtual string do_grouping() const { return "\03"; }
 };
 
 int main()
 {
     // Set up locale for comma formatting
     locale comma_locale(locale(), new comma_numpunct());
     cout.imbue(comma_locale);
     
     Payslip employee;
     string name;
     double basicSalary;
     int overtimeHours;
     
     cout << "==================================================" << endl;
     cout << "       EMPLOYEE PAYSLIP CALCULATOR" << endl;
     cout << "==================================================" << endl << endl;
     
     // Input employee name
     cout << "Enter Employee Name: ";
     getline(cin, name);
     employee.setName(name);
     
     // Input and validate basic salary
     do
     {
         cout << "Enter Basic Salary: ";
         cin >> basicSalary;
         
         if (basicSalary < 10000)
         {
             cout << "Error: Basic salary should not be less than 10,000!" << endl;
             cout << "Please try again." << endl << endl;
         }
     } while (basicSalary < 10000);
     
     employee.setBasicSalary(basicSalary);
     
     // Input and validate overtime hours
     do
     {
         cout << "Enter Number of OT Hours: ";
         cin >> overtimeHours;
         
         if (overtimeHours < 1)
         {
             cout << "Error: Minimum overtime hours is 1 hour!" << endl;
             cout << "Please try again." << endl << endl;
         }
     } while (overtimeHours < 1);
     
     employee.setOvertimeHours(overtimeHours);
     
     // Determine pay grade and tax rate
     employee.determinePayGradeAndTaxRate();
     
     // Compute pay
     employee.computePay();
     
     // Display results
     cout << endl;
     cout << "==================================================" << endl;
     cout << "              PAYSLIP DETAILS" << endl;
     cout << "==================================================" << endl << endl;
     
     cout << "Employee Name       : " << employee.getName() << endl;
     cout << "Basic Salary        : Php " << fixed << setprecision(2) 
          << employee.getBasicSalary() << endl;
     cout << "Pay Grade           : " << employee.getPayGrade() << endl;
     cout << "No. of OT Hours     : " << employee.getOvertimeHours() << endl;
     cout << "OT Pay              : Php " << fixed << setprecision(2) 
          << employee.getOvertimePay() << endl;
     cout << "Gross Pay           : Php " << fixed << setprecision(2) 
          << employee.getGrossPay() << endl;
     cout << "Withholding Tax     : Php " << fixed << setprecision(2) 
          << employee.getWithholdingTax() << endl;
     cout << "Net Pay             : Php " << fixed << setprecision(2) 
          << employee.getNetPay() << endl;
     
     cout << endl;
     cout << "==================================================" << endl << endl;
     
     _pause();
     return EXIT_SUCCESS;
 }