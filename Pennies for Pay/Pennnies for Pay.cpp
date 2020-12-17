/* Zach Sparkman - Pennies for pay.
 This program will request the number of days
 the employee has worked, then it will double the 
 amount of pennies earned per day starting with .01 for 
 the first day. Let's just say there is a big difference 
 between working 10 days, and working 15 days.
 */
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int Days;
    double Salary = .01, totalPay;
    cout << "Enter the number of days you have worked." << endl << "Days: ";
    cin >> Days;
    while(Days < 0)
    {
        cout << "You worked negative days? Wow. Talk about lazy. How do you even do that? Try again when you get some work done!";
        cin >> Days;
    }
    for(int x = 1; x <= Days; x++)
    {
        cout << fixed << setprecision(2);
        if (Days < 10)
            cout << "Day " << x << ":\t\t" << setw(10) << Salary << endl;
        else
            cout << "Day " << x << ":" << setw(10) << Salary << endl;
        //accumulate salary
        totalPay = totalPay + Salary;
        //double salary
        Salary = Salary * 2;
    }
    return 0;
}

