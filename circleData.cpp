// Que 12.Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle.
//  Select appropriate data structure and explain why you chose it. Arrange the circles
// in increasing order of their area and print all the data of each circle.
#include <iostream>
#include <vector>
#include<map>
using namespace std;
void AcceptData(map<double, int> &m)
{
    int noOfcircle, x;
    cout << "Enter no of circle: " << endl;
    cin >> noOfcircle;
    double r;
    for (int i = 0; i < noOfcircle; i++)
    {
        cout << "Enter radius of " << i << " circle :" << endl;
        cin >> r;
        cout<<"Enter x co-ordinate: "<<i<<" circle :"<<endl;
        cin>>x;
        m.insert(pair<double, int>(r,x));
    }
}

void calculateArea(const map<double, int > &v, vector<double> &area)
{

    for (auto i : v)
    {
        area.push_back(3.14 *i.first * i.first);
    }
}
    void displayArea(vector<double> & area)
    {
        for (auto i : area)
        {
            cout << "Area of circle is :"<<i << " " << endl;
        }

    }
    int main()
    {
        map<double,int>  v;
        vector<double> area;
        //int noOfCircles = 0;
       // cout << "Enter No of circles:" << endl;
        AcceptData(v);
        calculateArea(v, area);
        displayArea(area);
        return 0;
    }