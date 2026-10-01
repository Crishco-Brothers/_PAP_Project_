# PAP521S Project A – Short Technical Report

## 1. Introduction
The Municipal Financial Management System (MFMS) was developed as the foundation system for PAP521S – Programming in Practice. The project utilised C programming concepts and applied them into a real-life municipal finance management problem. The system is menu driven and broken down into logical modules for Employees, Budgets, Suppliers, Assets and reports.

## 2. Problem Description
Municipality needs to manage a number of different financial and administrative data categories. The objective of this foundation system is to provide a simple program that can store, process, search and report information related to employees, departmental budgets, suppliers and municipal assets.

## 3. System Objectives
The objectives were to:
- develop a simple menu-driven C application;
- allow input validation;
- store information in arrays and strings;
- utilise functions and modular source files;
- calculate salary and budget information;
- provide searching facilities; and
- generate basic management reports.

## 4. System Features
### Employee Management
The employee module stores employee ID, name, department, basic salary, housing allowance and transport allowance. Gross salary is calculated by summing up the three salary components. Employees can be displayed and searched by ID.

### Budget Management
The budget module stores departmental budgets and expenditure. Remaining budget is calculated as allocated budget less expenditure. A department is classified as within budget when the remaining amount is zero or positive and as exceeded when the remaining amount is negative.

### Supplier Management
The supplier module stores supplier ID, name, email, telephone number and town/location. Suppliers can be displayed and searched by name.

### Asset Management
The asset module stores asset ID, name, type, purchase value, department and condition. Assets can be displayed and searched by ID.

### Reports
The reporting module calculates employee salary statistics and total budget values. It also displays registered supplier and asset information as required by the project specification.

## 5. Program Design
The program uses a set of standalone source and header files. main.c is used to manage the main menu and module selection while employees.c , budget.c , suppliers.c and assets.c handles their respective data. The reports.c collects the data from the module functions and also generate executive reports. The input.c is used to handle reusable input and validation functions.

The data in the system are stored in arrays of fixed sizes and operations such as adding, displaying, searching and calculations are implemented as functions. The program uses loops to perform repetitive tasks, conditions to determine data validity or status and string functions to handle character data.

## 6. Challenges Encountered
The major challenges encountered when developing the application was safe handling of user input, input validation for negative and invalid values, modular programming, gathering information from the relevant functions to generate reports and also make the menu more user friendly and editing the whole menu to make it look more human than robotic.

## 7. Solutions Implemented
Reusable input functions ere created to read integers, floating-point values and non-empty strings. The program checks menu ranges, duplicate IDs, negative financial values and basic email structure. Public getter/display functions allow the reports module to access information without directly modifying module data.

## 8. Conclusion
The completed foundation system demonstrates the required minimum MFMS modules. The modular design also provides a suitable foundation for further improvements in the future.
