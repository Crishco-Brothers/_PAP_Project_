# PAP521S Project A – Individual Contribution Record

## Student Information
- **Student Name:** Festus Shapumba
- **Student Number:** 225075253
- **Group:** Group 4

## Assigned Responsibility
**Primary responsibility:** Group Coordinator, Input Module Programmer, and Build/Integration Support

## Functions / Modules Developed
- Developed the reusable input-handling functions in `input.c` and `input.h`.
- Implemented `readInt()` for validated integer input and error handling.
- Implemented `readFloat()` for validated floating-point input and rejection of invalid or non-finite values.
- Implemented `readString()` to accept non-empty text input and handle excess input safely.
- Implemented `readMenuChoice()` to enforce valid menu ranges.
- Added helper routines for newline removal and clearing remaining input from the input buffer.
- Authored the `Makefile` to compile and link all project modules into the final `mfms` executable.
- Coordinated the final integration of the modules and prepared the project documentation for submission.

## GitHub Contribution
**Repository:** https://github.com/Crishco-Brothers/_PAP_Project_

**Verified contribution:**
- **Commit:** `Final touch`
- **Description:** Completed the input module and Makefile integration and added the final project documentation files.

## Testing Performed
- Tested integer input using invalid text to confirm that the program rejects invalid whole-number input and prompts again.
- Tested menu validation using values outside the allowed range.
- Tested floating-point input with invalid and non-finite values.
- Tested empty string input to confirm that required text fields cannot be left blank.
- Tested project compilation through the Makefile to confirm that all modules link successfully.
- Checked the integrated system to ensure the input functions work correctly across the different modules.

## Individual Understanding
I can explain:
1. How `readInt()`, `readFloat()` and `readString()` validate user input.
2. How `readMenuChoice()` enforces valid menu ranges.
3. Why `fgets()` is used for controlled input handling.
4. How the Makefile compiles and links the project modules.
5. How the separate modules are integrated through their header files and public functions.
