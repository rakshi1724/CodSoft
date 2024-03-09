#include<iostream>
#include<cstdlib>
using namespace std;
    int main()
    {
        int num;
        int userNum=0;
        
        cout<<"Enter the starting value ";
        int off;
        cin>>off;

        cout<<"Enter a number for the range ";
        int range;
        cin>>range;

        num=off+(rand()%range);

        while(num!=userNum){
            cout<<"\nGuess the number within "<<off<<" and "<<off+range<<"\n";
            cin>>userNum;
            if(num>userNum){
                cout<<"Number is too small\n";
            }
            if(num<userNum){
                 cout<<"Number is too large\n";
            }
        }
       cout<<"Hurray! You Guessed it right\n"; 
        return 0;
    }
