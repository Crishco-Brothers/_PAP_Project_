# PAP521S Project A – Individual Contribution Record

## Student Information
- **Student Name:** Tuyeni Gelzinho
- **Student Number:** 226171833
- **Group:** Group 4

## Assigned Responsibility
**Primary responsibility:** Supplier Management Module

## Functions / Modules Developed
- Developed the Supplier Management module in `suppliers.c` and `suppliers.h`.
- Implemented `supplierMenu()` for supplier-module navigation.
- Implemented `addSupplier()` to capture supplier ID, name, email, telephone number and town/location.
- Implemented `findSupplierById()` to check supplier IDs and prevent duplicates.
- Implemented `findSupplierByName()` to search supplier records by exact name.
- Implemented `isValidEmail()` to perform basic email-structure validation.
- Implemented `displayAllSuppliers()` to display registered supplier records.
- Implemented `searchSupplier()` to locate a supplier by name.
- Implemented `getSupplierCount()` so the reports module can access the number of registered suppliers.

## GitHub Contribution
**Repository:** https://github.com/Crishco-Brothers/_PAP_Project_

**Verified contribution:**
- **Commit:** `TUYENI FINAL PUS`
- **Description:** Pushed the Supplier Management module and header file for integration into the final project.

## Testing Performed
- Tested adding suppliers with valid information.
- Tested rejection of zero and negative supplier IDs.
- Tested rejection of duplicate supplier IDs.
- Tested validation of supplier email format.
- Tested supplier display and exact-name search.
- Tested the not-found response for an unknown supplier name.
- Checked integration of supplier information with the Reports module.

## Individual Understanding
I can explain:
1. How supplier searches use `strcmp()` for exact-name comparison.
2. How duplicate supplier IDs are prevented.
3. How the email validation routine works.
4. How the supplier module communicates its registered-supplier count to the reporting module.
