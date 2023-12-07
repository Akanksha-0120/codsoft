#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num12;
    char op;
    cout<<"Welcome To AB Calculator"<< endl;
    cout<<"************************"<< endl;
    cout<<"enter num1: "<< endl;
    cin>>num1;

    cout<<"enter num2: "<< endl;
    cin>>num2;
    
    cout<<"enter the operation: "<<endl;
    cin>>op;

    switch(op)
    {
        case '+': num12=num1+num2;
                  cout<<"result = " << num12 << endl;
                  break;

        case '-': num12=num1-num2;
                  cout<<"result = " << num12 << endl;
                  break;

        case '*': num12=num1*num2;
                  cout<<"result = " << num12 << endl;
                  break;

        case '/': num12=num1/num2;
                  cout<<"result = " << num12 << endl;
                  break;
    }
    return 0;
}