//	Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N.
// Please note N can have maximum 5 digits. Print the numbers N and M. Compare N with M and print the result.
#include <iostream>
using namespace std;
int main()
{
    int num, rem;
    int rev_num=0;
    cout << "Enter the number : " << endl;
    cin >> num;
    if (num <= 99999)
    {

        while (num != 0)
        {
            rem = num % 10;
            rev_num=rev_num*10+rem;
            num = num / 10;
        }
        cout<<"Reverse number is : "<<rev_num<<endl;
        if(rev_num>num){
            cout<<"Reversd Number is greater than original number."<<endl;
        }
        else if(rev_num<num){
            cout<<"Reversd Number is less than original number."<<endl;
        }
        else cout<<"Both are equal"<<endl;  
    }
    else{
        cout<<"Enter the 5 Digits number only."<<endl;
    }

    return 0;
}

/*Enter the number : 
1234
Reverse number is : 4321
Reverse Number is greater that original number.*/
