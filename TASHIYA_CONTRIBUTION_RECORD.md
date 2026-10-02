# PAP521S Project A – Individual Contribution Record

## Student Information
- **Student Name:** Tashiya Beatrice
- **Student Number:** 225183056
- **Group:** Group 4

## Assigned Responsibility
**Primary responsibility:** Asset Management Module

## Functions / Modules Developed
- Developed the Asset Management module in `assets.c` and `assets.h`.
- Used parallel arrays to store up to 100 assets with ID, name, type, purchase value, department and condition.
- Implemented `addAsset()` to capture complete asset information.
- Added validation to ensure asset IDs are greater than zero, purchase values are non-negative and duplicate IDs are rejected.
- Implemented `findAssetById()` to locate an asset using its unique ID.
- Implemented `searchAsset()` to display a matching asset or a not-found message.
- Implemented `displayAllAssets()` to display registered assets.
- Implemented `getAssetCount()` so the reporting module can access the number of registered assets.
- Implemented `assetMenu()` to provide asset-module navigation.

## GitHub Contribution
**Repository:** https://github.com/Crishco-Brothers/_PAP_Project_

**Verified contribution:**
- **Commit:** `Added assets module and contribution record`
- **Description:** Added the Asset Management module and the associated individual contribution record.

## Testing Performed
- Tested adding assets with complete valid information.
- Tested rejection of zero and negative asset IDs.
- Tested rejection of negative purchase values.
- Tested rejection of duplicate asset IDs.
- Tested searching for an existing asset by ID.
- Tested searching for an asset ID that does not exist.
- Tested asset display and integration with the reporting module.

## Individual Understanding
I can explain:
1. How assets are stored in parallel arrays.
2. How `findAssetById()` performs ID searching.
3. How duplicate and invalid asset values are rejected.
4. How the asset count is passed to the reports module.
