# PAP521S Project A – Individual Contribution Record

## Student Information
- **Student Name:** Emmanuel Mwamba
- **Student Number:** 226011011
- **Group:** Group 4

## Assigned Responsibility
**Primary responsibility:** Reports Module

## Functions / Modules Developed
- Developed the executive reporting functionality in `reports.c` and `reports.h`.
- Implemented `displayReports()` as the main reporting function.
- Implemented the Employee Report section to calculate and display total employees, average gross salary, highest gross salary and lowest gross salary.
- Implemented the Budget Report section to calculate total allocated budget, total expenditure, remaining budget and the number of departments that exceeded their budgets.
- Integrated the Supplier Report to display the number of registered suppliers and supplier records.
- Integrated the Asset Report to display the number of registered assets and asset records.
- Used the public accessor functions provided by the other modules so the reports module can read information without directly modifying module data.

## GitHub Contribution
**Repository:** https://github.com/Crishco-Brothers/_PAP_Project_

**Verified contribution:**
- **Commit:** `MWAMBA FINAL PUSH`
- **Description:** Pushed the reports module and its header file for integration into the final system.

## Testing Performed
- Tested the Employee Report with registered employee data to confirm salary statistics are calculated and displayed.
- Tested the Budget Report with departmental budget data, including a case where expenditure exceeds allocation.
- Tested the Supplier Report to confirm registered supplier records are displayed.
- Tested the Asset Report to confirm registered asset records are displayed.
- Tested the Reports section with no data to confirm that the system displays the relevant no-data messages without crashing.
- Checked that the reporting module compiles and links with all other project modules.

## Individual Understanding
I can explain:
1. How employee salary statistics are calculated.
2. How total budget values are calculated.
3. How the reports module counts departments exceeding budget.
4. How `reports.c` uses public functions from the employee, budget, supplier and asset modules.
