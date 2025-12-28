/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Payslip Class
 * @app desc: Class definition for employee payslip with pay grade
 *           determination and salary computations
 * @history:
 *  - 2025/12/28 | Yuta Asakura
 *      -- Created Payslip class with properties and methods
 *      -- Added accessors and mutators
 *      -- Implemented determinePayGradeAndTaxRate method
 *      -- Implemented computePay method
 * ****************************************************************/

 #ifndef _PAYSLIP_H
 #define _PAYSLIP_H
 
 #include <string>
 
 using namespace std;
 
 class Payslip
 {
     private:
         string mName;
         char mPayGrade;
         double mBasicSalary;
         int mOvertimeHours;
         double mOvertimePay;
         double mGrossPay;
         double mNetPay;
         double mWithholdingTax;
         double mTaxRate;
         
     public:
         // Accessors
         string getName() { return mName; }
         char getPayGrade() { return mPayGrade; }
         double getBasicSalary() { return mBasicSalary; }
         int getOvertimeHours() { return mOvertimeHours; }
         double getOvertimePay() { return mOvertimePay; }
         double getGrossPay() { return mGrossPay; }
         double getNetPay() { return mNetPay; }
         double getWithholdingTax() { return mWithholdingTax; }
         double getTaxRate() { return mTaxRate; }
         
         // Mutators
         void setName(string name) { mName = name; }
         void setPayGrade(char payGrade) { mPayGrade = payGrade; }
         void setBasicSalary(double salary) { mBasicSalary = salary; }
         void setOvertimeHours(int hours) { mOvertimeHours = hours; }
         void setOvertimePay(double pay) { mOvertimePay = pay; }
         void setGrossPay(double pay) { mGrossPay = pay; }
         void setNetPay(double pay) { mNetPay = pay; }
         void setWithholdingTax(double tax) { mWithholdingTax = tax; }
         void setTaxRate(double rate) { mTaxRate = rate; }
         
         // Methods
         void determinePayGradeAndTaxRate();
         void computePay();
 };
 
 #endif