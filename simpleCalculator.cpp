#include<iostream>
using namespace std;

int add(int op1,int op2){   
return(op1+op2);
}

int sub(int op1,int op2){    
return(op1-op2);
}

int mul(int op1,int op2){
return(op1*op2);
}

int divi(int op1,int op2){
return(op1/op2);
}

int main()
{
    char opn;
    int op1=0,op2=0;
    bool temp=true;
    while(temp==true)
    {
        cout<<"\n\n|-------------------------|";
    cout<<"\n|----Simple Calculator----|\n";
    cout<<"|-------------------------|\n";
    cout<<"| * * Menu Options * *    |\n";
    cout<<"| -->Addition (+)         |\n";
    cout<<"| -->Subtraction (-)      |\n";
    cout<<"| -->Multiplication (*)   |\n";
    cout<<"| -->Division (/)         |\n";
    cout<<"|-------------------------|\n\n";
    cout<<"Enter your operation\n";
    cin>>opn;

    cout<<"Enter two numbers ";
    cin>>op1>>op2;

    switch (opn)
    {
    case '+':  cout<<"The result is "<<add(op1,op2);
        break;
    
    case '-':cout<<"The result is "<<sub(op1,op2);
        break;
    
    case '*':cout<<"The result is "<<mul(op1,op2);
        break;
    
    case '/':cout<<"The result is "<<divi(op1,op2);
        break;
    
    default:cout<<"Operation Failed"; 
            temp=false;
        break;
    }
    }   
    return 0;
}

 