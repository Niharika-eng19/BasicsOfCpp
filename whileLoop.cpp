#include<iostream>
using namespace std;
int main(){

    int a = 123;
    int b;
    char name[10];
    cout<<"please enter your name to verify user!\n";
    cin>>name;
    cout<<"hello "<<name<<" !Welcome to my ATM machine!\n";
    while(a!=b){
        cout<<"Please enter your password";
        cin>>b;
        if (a != b) {
         cout << "Password " << b << " not matched, try again.\n";
            }
        
    }
    cout<<"Access Granted!\n";
    cout<<"Thank you to use ATM machine.";
    return 0;
}

