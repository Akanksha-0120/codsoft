#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int num=(rand()%200+1);
    int guess,guesses=1;
    cout<<"Welcome to Guessing Game"<<endl;
    cout<<"************************"<<endl;
do
 {
    cout<<"enter the number that you want to guess b|w 1-200 :"<<endl;
    cin>>guess;
    if(num==guess)
    {
        cout<<"correct number"<<endl;
    }

    else if(num>guess)
    {
        cout<<"too low"<<endl;
    }

     else if(num<guess)
    {
        cout<<"too high"<<endl;
    }

    else{
        cout<<"try next time" <<endl;
    }

 }

 while(num!=guess);
 return 0;
}