// Write a program to a accept a list of N integers. Find the largest and the //smallest number in the list and their respective positions in the list.
#include <iostream>

using namespace std;
int main()
{
    int arr[10],min, max, indexmax, indexmin;
    
    cout<<"Enter the Numbers "<<endl;
   // cin>>n;
    for(int i=0;i<10;i++){
        
        cin>>arr[i];
    }
        max=arr[0];
        
      for(int i=1;i<10;i++)
      {
         if(max<arr[i])
        {
        max=arr[i];
        indexmax=i;
        }
      }
 cout<<"Maximum number in list : "<<max<<endl;
 cout<<"Maximum Number index is : "<<indexmax<<endl;
 min=arr[0];
        
      for( int i=1;i<10;i++)
      {
         if(min>arr[i])
        {
        min=arr[i];
        indexmin=i;
        }
      }
  cout<<"Minimum number in list : "<<min<<endl;
   cout<<"Minimum Number index is : "<<indexmin<<endl;
    return 0;
}
