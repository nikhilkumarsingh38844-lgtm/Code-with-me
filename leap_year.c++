#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year:-";
    cin>>year;
    if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)){
        cout<<"Given year "<<year <<" is leap year";
    }else{
        cout<<"Given year "<<year <<" is not leap year";
    }
    return 0;
} 