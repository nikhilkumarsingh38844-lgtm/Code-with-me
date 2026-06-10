#include<iostream>
using namespace std;
int main(){
    int choise;
    cout<<"Enter 1 if you want to check a triangle is valid based on angles!";
    cout<<endl;
    cout<<"Enter 2 if you want to check a triangle is valid based on sides!";
    cout<<endl;
    cout<<"Enter the choise:-";
    cin>>choise;
    if(choise==1){
        int a,b,c;
        cout<<"Enter the first angle:-";
        cin>>a;
        cout<<"Enter the secound angle:-";
        cin>>b;
        cout<<"Enter the thrid angle:-";
        cin>>c;
        if(a+b+c==180 && a>0 && b>0 && c>0){ 
            cout<<"Triangle is valid based on angles";
        }else{
            cout<<"Triangle is not valid based on angles";
        }
    }else if(choise==2){
         int a,b,c;
        cout<<"Enter the first side:-";
        cin>>a;
        cout<<"Enter the secound side:-";
        cin>>b;
        cout<<"Enter the thrid side:-";
        cin>>c;
        if(a+b>c && a+c>b && b+c>a ){
             cout<<"Triangle is valid based on sides";
        }else{
            cout<<"Triangle is not valid based on sides";
        }
    }else{
        cout<<"Invalid input!";
    }
    return 0;
}