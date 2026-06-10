#include<iostream>
using namespace std;
int main(){
    int choise;
    cout<<"Enter 1 if you want to convert kilogram to gram\n";
    cout<<"Enter 2 if you want to convert centimeter to meter\n";
    cout<<"Enter the choise:-";
    cin>>choise;
    if(choise==1){
        int unit;
        cout<<"Enter the unit in kilogram:-";
        cin>>unit;
        int ans = unit*1000;
        cout<<unit <<" kilogram is "<<ans <<" gram";
    }else if(choise==2){
        int unit;
        cout<<"Enter the unit in centimeter:-";
        cin>>unit;
        double ans = unit/100;
        cout<<unit <<" centimeter is "<<ans <<" meter";
    }else {
        cout<<"Invalid input!";
    }
    return 0;
}
