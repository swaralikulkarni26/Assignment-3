// Que 12.Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle.
//  Select appropriate data structure and explain why you chose it. Arrange the circles
// in increasing order of their area and print all the data of each circle.
#include <iostream>
#include <vector>
using namespace std;
void AcceptData(vector<double> &v)
{
    int noOfcircle;
    cout << "Enter no of circle: " << endl;
    cin >> noOfcircle;
    double r;
    for (int i = 0; i < noOfcircle; i++)
    {
        cout << "Enter radius of " << i << " circle :" << endl;
        cin >> r;
        v.push_back(r);
    }
}

void calculateArea(const vector<double> &v, vector<double> &area)
{

    for (auto i : v)
    {
        cout<<i<<" ";
        area.push_back(3.14 * i * i);
    }
}
    void diplayArea(vector<double> & area)
    {
        for (auto i : area)
        {
            cout << area[i] << " " << endl;
        }
    }
    int main()
    {
        vector<double> v;
        vector<double> area;
        //int noOfCircles = 0;
       // cout << "Enter No of circles:" << endl;
        AcceptData(v);
        calculateArea(v, area);
        diplayArea(area);
        return 0;
    }