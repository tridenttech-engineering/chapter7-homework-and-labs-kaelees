//Lab7-4.cpp - displays the average electric bill
//Created/revised by kaelee storozuk on 10/24/24

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
  int months = 0;
  double avgBill = 0.0;
  double bill = 0.0;
  double totalBills = 0.0;
  
  cout<< "Bill for month 1: ";
  cin >> bill;
  while (bill >= 0.0)
    {
      months += 1;
      totalBills += bill;
      cout<< "Bill for month " << months + 1 << ": ";
      cin >> bill;
    
    }
    if (months > 0)
      avgBill = totalBills / months;
    else 
      cout<< "No bill amount entered." << endl;
  // end if
  cout<< fixed << setprecision(2) << endl;
  cout<< "Average electric bill for " << months << " months: $" << avgBill << endl;
return 0; //end of main function 
}