#include<iostream>
using namespace std;
int main(){

    // STATIC VALUES OPERATOR
    // int a= 5;
    // int b= 10;

    // cout<<"sum of "<<a<<" and " <<b <<"is:"<<a+b;
    // cout<<" first number is:"<<a<<endl;
    // cout<<"second number is:"<<b<<endl;
    // cout<<"sum of numbers:"<<a+b<<endl;
    // cout<<"difference of numbers:"<<b-a<<endl;
    // cout<<"product of numbers:"<<a*b<<endl;
    // cout<<"division of numbers:"<<b/a<<endl;


    // DYNAMIC VALUE OPERATOR
    int num1;
    int num2;

    cout<<"enter first number:";
    cin>>num1;
    cout<<"enter second number:";
    cin>>num2;

    cout<<"sum of "<<num1<<" and " <<num2 <<"is:"<<num1+num2<<endl;
    cout<<"difference of"<<num1<<"and"<<num2<<"is:"<<num1-num2<<endl;
    cout<<"product of"<<num1<< "and" <<num2<< "is:"<<num1*num2<<endl;
    cout<<"division of"<<num1<< "and" <<num2<< "is:"<< num1/num2<<endl;


    return 0;

}