// 4.Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.

#include <iostream>
using namespace std;

int lastDigit(int num)
{
    int ldigit = num % 10;
    return ldigit;
}
int firstDigit(int num)
{

    int fdigit;
    while (num >= 10)
    {
        num = num / 10;
    }
    return num;
}
int main()
{
    int num;
    int rem, sum = 0, ldigit, fdigit;
    cout << "Enter the number : " << endl;
    cin >> num;
    if (num <= 99999)
    {
        ldigit = lastDigit(num);
        cout << "last Digit : "<<ldigit << endl;
        fdigit = firstDigit(num);
        cout <<"First Digit : " <<fdigit << endl;
        sum = ldigit + fdigit;
        cout << "Sum of first Digit and last digit of number is : " << sum << endl;
    }
    else
    {
        cout << "Number must be 5 digits only...Pease enter 5 digits Number." << endl;
    }
    return 0;
}
/*Enter the number : 
1234
last Digit : 4
First Digit : 1
Sum of first Digit and last digit of number is : 5*/