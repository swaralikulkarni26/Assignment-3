
//Que 10.Write a program to accept a list L1 of N integers. Accept integer D. 
//Generate list L2 such that it contains only those integers from list L1 which are divisible by D. Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.

#include<iostream>
#include<vector>

using namespace std;

void AcceptInput(int& d, vector<int> &l1)
{
    int n=0;
    cout<<"Enter number of elements:";
    cin>>n;

    for(int i=0;i<n;i++)
    {   int num=0;
        cout<<"Enter "<<i<<" element: ";
        cin>>num;
        l1.push_back(num);
    }
    cout<<"Enter diviser: ";
    cin>>d;
}

void DivisibleBy(const vector<int> & l1, const int & d, vector<int> &l2)
{
    for(auto iter: l1) 
    {
        if(iter%d == 0)
            l2.push_back(iter);
    }
}

void Display(const vector<int> & l1, const vector<int>&l2, const int & d) {
    cout<<"l1 : (";
    for(auto iter : l1) {
        cout<<iter<<" ";
    }
    cout<<")"<<endl;
    cout<<"size of l1: "<<l1.size()<<endl;
   cout<<"--------------------------------------------------"<<endl;
   cout<<"Diviser D: "<<d<<endl; 

    cout<<"l2 : (";
    for(auto iter : l2) {
        cout<<iter<<" ";
    }
    cout<<")"<<endl;
    cout<<"size of l1: "<<l2.size()<<endl;
}
	
int main() 
{
    int d=0;
    vector<int> l1;
    vector<int> l2;
    AcceptInput(d, l1);
    DivisibleBy(l1,d,l2);
    Display(l1, l2, d);
  
    return 0;
}
/*Enter number of elements:5
Enter 0 element: 10
Enter 1 element: 5
Enter 2 element: 15
Enter 3 element: 12
Enter 4 element: 14
Enter diviser: 5
l1 : (10, 5, 15, 12, 14, )
L1 Size: 5
--------------------------------------------------
Diviser D: 5
l2 : (10, 5, 15, )

l2 size: 3*/