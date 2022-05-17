#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
//function main collects data from user input and computes and displays monthly
//payment
//-----------------------------------------------------------------------------
int main()
{
        //declares needed doubles for input and output
        double principal, APR, yrs, monthly,I;
        //prompts user for needed input and saves input to proper variables
        cout << "Enter the principal. ";
        cin >> principal;
        cout << "Enter the APR. ";
        cin >> APR;
        cout << "Enter the number of years in the term. ";
        cin >> yrs;
        //computes the percent per month (i) from the APR by dividing it by the 1200 for the number of months (12) and 100 to convert from percent
        I=APR/1200;
        //computes number of months (n) by multiplying the number of years to pay by 12
        int months=yrs*12;
        //computers monthly payment using R=P I/1-(1+I)-n
        monthly=principal*(I/(1-(pow(1+I,-months))));
        //prints  out the monthly paynment with two decimals places using fixed and setprecision for formatting
        cout <<  "your monthly payment is $" << fixed  << setprecision(2) <<  monthly << "."<< endl ;
        return 0;
}
