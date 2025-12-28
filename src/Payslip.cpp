/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Payslip Class Implementation
 * @app desc: Implementation of Payslip class methods
 * @history:
 *  - 2025/12/28 | Yuta Asakura
 *      -- Implemented determinePayGradeAndTaxRate method
 *      -- Implemented computePay method
 * ****************************************************************/

 #include "Payslip.h"

 void Payslip::determinePayGradeAndTaxRate() {
    // Determine pay grade and tax rate on basic salary
    if (mBasicSalary >= 10000 && mBasicSalary < 15000) {
        mPayGrade = 'A';
        mTaxRate = 0.10;
    }
    else if (mBasicSalary >= 15000 && mBasicSalary < 20000) {
        mPayGrade = 'B';
        mTaxRate = 0.10;
    }
    else if (mBasicSalary >= 20000 && mBasicSalary < 25000) {
        mPayGrade = 'A';
        mTaxRate = 0.15;
    }
    else if (mBasicSalary >= 25000 && mBasicSalary < 30000) {
        mPayGrade = 'B';
        mTaxRate = 0.15;
    }
    else if (mBasicSalary >= 30000 && mBasicSalary < 35000) {
        mPayGrade = 'A';
        mTaxRate = 0.20;
    }
    else if (mBasicSalary >= 35000 && mBasicSalary < 40000) {
        mPayGrade = 'B';
        mTaxRate = 0.20;
    }
    else if (mBasicSalary >= 40000 && mBasicSalary < 45000) {
        mPayGrade = 'A';
        mTaxRate = 0.25;
    }
    else if (mBasicSalary >= 45000 && mBasicSalary < 50000) {
        mPayGrade = 'B';
        mTaxRate = 0.25;
    }
    else if (mBasicSalary >= 50000 && mBasicSalary < 55000) {
        mPayGrade = 'A';
        mTaxRate = 0.30;
    }
    else // Basic salary >= 55000
    {
        mPayGrade = 'B';
        mTaxRate = 0.30;
    }

 }

 void Payslip::computePay() {
        // Fixed Deductions
        const double SSS = 500.00;
        const double PAGIBIG = 200.00;
        const double PHILHEALTH = 100.00;

        // OT pay = no. of OT hours * 1% of basic salary
        mOvertimePay = mOvertimeHours * (0.01 * mBasicSalary);

        // Gross pay = basic salary + OT pay
        mGrossPay = mBasicSalary + mOvertimePay;
        
        // Withholding tax = gross pay * tax rate
        mWithholdingTax = mGrossPay * mTaxRate;

        // Net pay = gross pay - withholding tax - fixed deductions
        mNetPay = mGrossPay - mWithholdingTax - SSS - PAGIBIG - PHILHEALTH;
 }