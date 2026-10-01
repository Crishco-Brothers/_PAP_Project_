# PAP521S Project A – Individual Contribution Record

## Student Information
- Student Name: Mario T Haufiku
- Student Number: 217066909

## Assigned Responsibility
Primary responsibility: Budget Module Creator

## Functions / Modules Developed
- Developed the `addBudget` function to prompt the user for a department name, allocated budget, and expenditure, validating that the register is not full and values are non-negative.
- Implemented `displayAllBudgets` to present registered departmental budgets in a clear, formatted overview including allocated amounts, expenditure, remaining balances, and status (`WITHIN BUDGET` or `EXCEEDED BUDGET`).
- Implemented robust public accessor functions (`getBudgetCount`, `getBudgetAllocated`, `getBudgetExpenditure`, and `getBudgetRemaining`) to safely share module data with reporting components.

## GitHub Contribution
Repository: https://github.com/Crishco-Brothers/_PAP_Project_

## List of commits/branches/pull requests:
- Commit: `Completed budget.c and budget.h` – Description: uploaded the complete ready budget.c and budget.h, and it corespinding to all other modeuls from my fellow members and it allighns with the cordinators instruction fot the whole program to run
- Commit: `Mario individual contribution record` – Description: i uploaded my individual contribution record .

## Testing Performed
Record the tests personally performed:
- Main menu validation: Verified loop termination and correct redirection for options 1 through 3.
- Employee testing: Verified correct integration with general system compilation.
- Budget testing: Tested successful recording and calculation of remaining funds for multiple departments.
- Supplier testing: Verified module compilation stability.
- Asset testing: Verified module compilation stability.
- Reports testing: Confirmed data visibility across module boundaries using public accessors.
- Invalid input testing: Validated system response against negative financial entries and exceeding maximum buffer capacity (`MAX_BUDGET`).