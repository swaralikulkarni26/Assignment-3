// Que.8 Write a program to accept a list of N integers. Accept integer K.
// Find the Kth smallest number in the list and its position.
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int acceptList(int n, vector<int> & v)
{
    int k=0;
    cout << "Enter " << n << " integers: " << endl;
    for (int i=0; i<n; i++)
    {
        int num=0;
        cout<<"Enter "<<i+1<<" element: ";
        cin>>num;
        v.push_back(num);
    }
    cout<<"Enter k : ";
    cin>>k;

    return k;
}
int kthSmallestElement(int k, vector<int> & v ){
    sort(v.begin(),v.end());
    return v[k];
}

int main()
{
    int n=0;
    vector<int> v;
    cout<<"enter number of elements: ";
    cin>>n;
    int k = acceptList(n, v);
    cout<<k<<"th samallest element is: "<<kthSmallestElement(k, v)<<endl;;
    return 0;
}
/*enter number of elements: 5
Enter 5 integers: 
Enter 1 element: 1
Enter 2 element: 5
Enter 3 element: 74
Enter 4 element: 8
Enter 5 element: 3
Enter k : 7
Number is out of range.

enter number of elements: 5
Enter 5 integers: 
Enter 1 element: 1
Enter 2 element: 4
Enter 3 element: 5
Enter 4 element: 8
Enter 5 element: 7
Enter k : 3
3th samallest element is: 5

*/