# PAP521S Project A – Individual Contribution Record

## Student Information
- Student Name: Tashiya Beatrice
- Student Number: 225183056

## Assigned Responsibility
Primary responsibility: Assets module creation and management 

## Functions / Modules Developed
Describe the actual code you personally developed. Example:
Programmed the complete Asset Management module (assets.c and assets.h), utilizing parallel arrays to store up to 100 assets with details including ID, name, type, purchase value, department, and condition.   Implemented the addAsset() function with strict input validation to ensure asset IDs are strictly greater than zero, purchase values are non-negative, and duplicate IDs are rejected before committing to the arrays.   Developed the searchAsset() and findAssetById() functions to allow users to quickly locate and display specific municipal assets by their unique ID.   Created the assetMenu() interactive sub-menu to route users between adding, displaying, searching, and returning to the main menu.   Implemented getter functions like getAssetCount() and public display functions (displayAllAssets()) to allow the reporting module to access asset information securely without directly modifying the data.
## GitHub Contribution
Repository: https://github.com/Crishco-Brothers/_PAP_Project_

List your actual commits/branches/pull requests:
- Commit: Added assets.c and assets.h – Description: pushed the c and h file  module.
- Commit: Tashiya individual contribution record – Description: pushed the individual contribution record.
Record the tests you personally performed:
### Asset testing: 
Verified that addAsset() correctly prevents duplicate IDs, negative purchase values, and rejects zero or negative IDs. Tested searchAsset() to ensure it outputs the correct asset details or properly handles a "not found" state.   Main menu validation: Tested the bounds of the assetMenu() choices (1 through 4) to ensure proper routing and safe exit.   Invalid input testing: Verified string constraints using the 50-character TEXT_SIZE limit and tested numeric validation limits for IDs and values.   Reports testing: Verified that getAssetCount() correctly passes the total registered asset count to the reports module.   Employee testing: Conducted by team members handling the Employee module.Budget testing: Conducted by team members handling the Budget module.Supplier testing: Conducted by team members handling the Supplier module.
