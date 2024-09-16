#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double investment, rate;
    int years;

    cout<<"Enter the initial investment amount: ";
    cin>>investment;

    cout<<"Enter the annual interest rate in percentage: ";
    cin>>rate;

    cout<<"Enter the number of years: ";
    cin>>years;

    double futureVal = investment * pow(1 + rate / 100, years);

    cout<<"Future value after " << years << " years: "<<futureVal<<endl;

    return 0;
}