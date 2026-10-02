# PAP521S Project A – Municipal Financial Management System (MFMS)

## Course Information
- **Course:** PAP521S – Programming in Practice
- **Project:** Project A – Foundation System
- **Group:** Group 4
- **Programming Language:** ANSI C (C99)
- **Compiler:** GCC
- **Development Environment:** Visual Studio Code
- **Version Control:** Git and GitHub

## Group Members

| No. | Student Name | Student Number | Primary Responsibility |
|---|---|---|---|
| 1 | Festus Shapumba | 225075253 | Group Coordinator, Input Module and Build/Integration |
| 2 | Mario T Haufiku | 217066909 | Budget Management Module |
| 3 | Soini Imbili | 226067335 | Main Menu and Program Control |
| 4 | Emmanuel Mwamba | 226011011 | Reports Module |
| 5 | Maritin Nakasole | 226035220 | Employee Management Module |
| 6 | Tashiya Beatrice | 225183056 | Asset Management Module |
| 7 | Tuyeni Gelzinho | 226171833 | Supplier Management Module |

## Project Description
The Municipal Financial Management System (MFMS) is a menu-driven C application developed as the foundation system for PAP521S – Programming in Practice. The system provides basic employee, budget, supplier, asset and report management functions while demonstrating the programming concepts covered during the first part of the course.

## System Features

### Employee Management
- Add employees
- Display registered employees
- Search employees by ID
- Calculate gross salary from basic salary and allowances
- Validate employee IDs and salary values

### Budget Management
- Add departmental budgets
- Record expenditure
- Calculate remaining budget
- Determine whether a department is within or over budget
- Produce overall budget totals

### Supplier Management
- Add suppliers
- Store supplier ID, name, email, telephone and town/location
- Display registered suppliers
- Search suppliers by exact name
- Validate duplicate IDs and basic email structure

### Asset Management
- Add municipal assets
- Store asset ID, name, type, purchase value, department and condition
- Display registered assets
- Search assets by ID
- Validate duplicate IDs and non-negative purchase values

### Reports
- Employee report: total, average, highest and lowest gross salary
- Budget report: total allocated, total expenditure, remaining budget and departments exceeding budget
- Supplier report: registered supplier records
- Asset report: registered asset records

## C Programming Concepts Demonstrated
- Variables and appropriate data types
- Input and output
- Arithmetic, relational and logical operators
- `if`, `if-else` and `switch` statements
- `for` and `do-while` loops
- Arrays
- C strings and string functions such as `strcmp()`, `strchr()`, `strcspn()` and `strcat()`
- Functions with parameters and return values
- Modular program organisation using `.c` and `.h` files
- Input validation and error handling

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
├── README.md
├── TECHNICAL_REPORT.md
├── TEST_PLAN.md
└── Individual contribution records
```

## Compilation

### Using the Makefile
```bash
make
```

### Directly with GCC
```bash
gcc -std=c99 -Wall -Wextra -Wpedantic -g main.c input.c employees.c budget.c suppliers.c assets.c reports.c -o mfms
```

## Running the System
After compilation, run:

```bash
./mfms
```

## Testing
The project includes `TEST_PLAN.md`, covering main menu navigation, employee, budget, supplier and asset operations, reports, invalid input, negative financial values, duplicate IDs and program exit.

## Documentation
The submission includes:
- `README.md` – project overview, group information, features and instructions
- `TECHNICAL_REPORT.md` – short technical report for Project A
- `TEST_PLAN.md` – project testing plan
- Individual contribution records – evidence of each member's responsibility, development work, GitHub contribution and testing

## GitHub Repository
**Repository:** https://github.com/Crishco-Brothers/_PAP_Project_

The GitHub repository contains the group's Project A source code, documentation and individual contribution records.

## Notes for Submission
Project A is the foundation system for the next stage of the PAP521S project. The source code is modular and uses separate files for the main menu, input handling, employee management, budget management, supplier management, asset management and reports.
