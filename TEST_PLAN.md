# MFMS Project A – Test Plan
_____________________________________________________________________________________________________________________________________________________
| Test |                                     Action                                     | Expected Result                                           |
 ___________________________________________________________________________________________________________________________________________________
| T01  |  Start program                                                                 |  Main menu is displayed                                   |
| T02  |  Enter invalid menu value                                                      |  Program rejects value and asks again                     |
| T03  |  Add employee with valid data                                                  |  Employee is stored and confirmation appears              |
| T04  |  Add employee with negative salary                                             |  Employee is rejected                                     |
| T05  |  Search existing employee                                                      |  Correct employee details are displayed                   |
| T06  |  Search mis sng employee                                                       |  "Employee not found" appears                             |
| T07  |  Add budget with valid values                                                  |  Budget is stored                                         |
| T08  |  Add negative budget                                                           |  Budget is rejected                                       |
| T09  |  Enter expenditure greater than allocation                                     |  Status is "EXCEEDED BUDGET"                              |
| T10  |  Add supplier with invalid email                                               |  Supplier is rejected                                     |
| T11  |  Search existing supplier                                                      |  Correct supplier is displayed                            |
| T12  |  Add asset with full required fields                                           |  Asset is stored                                          |
| T13  |  Search existing asset                                                         |  Correct asset details are displayed                      |
| T14  |  Open Reports with data                                                        |  Employee, budget, supplier and asset reports display     |
| T15  |  Open Reports without data                                                     |  Reports show zero/no-data messages without crashing      |
| T16  |  Enter text where a number is expected                                         |  Program rejects the input safely                         |
| T17  |  Re-enter duplicate employee/supplier/asset ID                                 |  Duplicate is rejected                                    |
| T18  |  Exit                                                                          |  Program closes cleanly                                   |
 ___________________________________________________________________________________________________________________________________________________