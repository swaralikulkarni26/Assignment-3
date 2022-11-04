//Que 5. Accept cost price(CP) and Selling price(SP) of an item. 
//Calculate the ammount of PROFIT/LOSS made by the seller and print the 
#include<iostream>
using namespace std;

int main(){
    float cp,sp,loss, profit;
    cout<<"Enter Cost price: "<<endl;
    cin>>cp;
    cout<<"Enter Seling Price: "<<endl;
    cin>>sp;

    if(sp>cp){

        profit=sp-cp;
        cout<<"Profit is : "<<profit<<endl;
    }
    else if(sp<cp){
        loss=cp-sp;
        cout<<"Loss is : "<<loss<<endl;
    }
    else 
    cout<<"There is neither profit nor loss."<<endl;

        return 0;
}

/*Enter Cost price : 
150
Enter Seling price : 
200
profit is : 50*/
