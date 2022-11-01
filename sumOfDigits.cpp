//	Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits.
#include <iostream>
using namespace std;
int main()
{
    int num;
    int rem, sum = 0;
    cout << "Enter the number : " << endl;
    cin >> num;
    if (num <= 99999)
    {
        while (num != 0)
        {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        cout << "Sum of digits of number is : " << sum << endl;
    }
    else
    {
        cout << "Number must be 5 digits only...Pease enter 5 digits Number." << endl;
    }
    return 0;
}
/*Enter the number :
45678
Sum of digits of number is : 30*/