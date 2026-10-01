# PAP521S Project A – Municipal Financial Management System (MFMS)

## Course Information
- Course: PAP521S – Programming in Practice
- Project: Project A – Foundation System
- Language: ANSI C / C99
- Compiler: GCC
- Development Environment: Visual Studio Code
- Version Control: Git and GitHub

## Project Description
The Municipal Financial Management System (MFMS) is a menu driven C application that demonstrates the programming concepts being taught in the first part of the PAP521S course. The system offers basic employee, budget, supplier, asset and report management capabilities.

## System Features
### Employee Management
- Employees can be added
- Registered employees can be displayed
- Employees can be searched by ID
- Gross salary can be calculated from basic salary and allowances
- Validation of IDs and salary values

### Budget Management
- Budgets can be added for departments
- Expenditure recorded
- Remaining budget calculated
- Determination of whether a department is within or over budget
- Overall budget totals can be produced

### Supplier Management
- Suppliers can be added
- Supplier ID, name, email, telephone and town/location stored
- Suppliers can be displayed
- Suppliers can be searched by exact name
- Validation of duplicate IDs and basic email structure

### Asset Management
- Assets can be added
- Asset ID, name, type, purchase value, department and condition stored
- Registered assets can be displayed
- Assets can be searched by ID
- Validation of duplicate IDs and non-negative purchase values

### Reports
- Employee report: total, average, highest and lowest gross salary
- Budget report: allocated, expenditure, remaining budget and departments exceeding budget
- Supplier report: registered supplier records
- Asset report: registered asset records

## C Programming Concepts Demonstrated
- Variables and appropriate data types
- Input and output
- Arithmetic, relational and logical operators
- `if`, `if-else` and `switch`
- `for` and `do-while` loops
- Arrays
- C strings and functions such as `strlen`, `strcmp`, `strchr`, `strcspn`, `strcat`
- Functions with parameters and return values
- Modular program organisation using `.c` and `.h` files
- Input validation

## Project Structure
```text
MFMS/
├── main.c
├── input.c
├── input.h
├── employees.c
├── employees.h
├── budget.c
├── budget.h
├── suppliers.c
├── suppliers.h
├── assets.c
├── assets.h
├── reports.c
├── reports.h
├── Makefile
└── README.md
```

## Compilation
directly with GCC:
```bash
gcc -std=c99 -Wall -Wextra -Wpedantic -g main.c input.c employees.c budget.c suppliers.c assets.c reports.c -o mfms
```

## Running the System
```bash
./mfms
```

## GitHub
The whole program pushed on github (https://github.com/Crishco-Brothers/_PAP_Project_) before downloading as it is and submition so the whole zip file is exactly as it is on git hub.