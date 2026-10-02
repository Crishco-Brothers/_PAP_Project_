# PAP521S Project A – Individual Contribution Record

## Student Information
- **Student Name:** Mario T Haufiku
- **Student Number:** 217066909
- **Group:** Group 4

## Assigned Responsibility
**Primary responsibility:** Budget Management Module

## Functions / Modules Developed
- Developed the Budget Management module in `budget.c` and `budget.h`.
- Implemented `addBudget()` to record a department, allocated budget and expenditure.
- Added validation to prevent negative financial values and prevent the budget register from exceeding its maximum capacity.
- Implemented `displayAllBudgets()` to display departmental allocation, expenditure, remaining budget and budget status.
- Implemented `getBudgetCount()` to provide the number of registered departmental budgets.
- Implemented `getBudgetAllocated()`, `getBudgetExpenditure()` and `getBudgetRemaining()` as accessor/calculation functions used by the reporting module.
- Integrated the budget menu using `budgetMenu()` for adding, displaying and returning to the main menu.

## GitHub Contribution
**Repository:** https://github.com/Crishco-Brothers/_PAP_Project_

**Verified contribution:**
- **Commit:** `Completed budget.c and budget.h`
- **Description:** Added the completed budget module and header file and aligned the module with the other project components so the full system could compile and run.

## Testing Performed
- Tested adding departmental budgets with valid allocation and expenditure values.
- Tested calculation of remaining budget as allocated budget minus expenditure.
- Tested the within-budget and exceeded-budget status conditions.
- Tested rejection of negative allocation and expenditure values.
- Tested budget display and integration with the reporting module.
- Checked that the module compiles and links successfully with the complete system.

## Individual Understanding
I can explain:
1. How departmental budget data are stored in arrays.
2. How remaining budget is calculated.
3. How the system identifies departments that exceed their allocation.
4. How the budget getter functions allow `reports.c` to use budget information.
