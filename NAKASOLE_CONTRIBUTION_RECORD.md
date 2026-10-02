# PAP521S Project A – Individual Contribution Record

## Student Information
- **Student Name:** Maritin Nakasole
- **Student Number:** 226035220
- **Group:** Group 4

## Assigned Responsibility
**Primary responsibility:** Employee Management Module

## Functions / Modules Developed
- Developed the Employee Management module in `employees.c` and `employees.h`.
- Implemented employee storage using arrays for IDs, names, departments, basic salaries, housing allowances and transport allowances.
- Implemented `addEmployee()` to capture employee information and validate required values.
- Implemented `findEmployeeById()` to search for employees using their unique IDs.
- Prevented duplicate employee IDs.
- Rejected zero or negative employee IDs and negative salary/allowance values.
- Implemented `displayAllEmployees()` to display registered employee information.
- Implemented `searchEmployee()` to locate and display an employee by ID.
- Implemented `getEmployeeCount()` to provide the number of registered employees.
- Implemented `getEmployeeGross()` to calculate gross salary as basic salary plus housing and transport allowances.
- Implemented `employeeMenu()` to provide employee-module navigation.

## GitHub Contribution
**Repository:** https://github.com/Crishco-Brothers/_PAP_Project_

**Verified contribution:**
- **Commit:** `Add Nakasole employee contribution update`
- **Description:** Added the employee contribution record documenting the Employee Management responsibilities and implementation.

## Testing Performed
- Tested adding employees with valid information.
- Tested rejection of zero and negative employee IDs.
- Tested rejection of duplicate employee IDs.
- Tested rejection of negative basic salary and allowance values.
- Tested employee display and search by ID.
- Tested gross salary calculation using basic salary plus housing and transport allowances.
- Checked employee-module integration with the reports module.

## Individual Understanding
I can explain:
1. How employee search works using `findEmployeeById()`.
2. How gross salary is calculated by `getEmployeeGross()`.
3. Why arrays are used to store multiple employee records.
4. How duplicate IDs and invalid salary values are handled.
