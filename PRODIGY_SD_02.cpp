#include<bits/stdc++.h>
using namespace std;



int main()
{
    time_t k = time(0);//k stores the current time clock.
    srand(k);//Sets the seed value of the random function.
    int t = rand()%100;//Generates the random function in the range 1 to 100.
    int i= 1;
    cout<<"Enter the number you have guessed"<<endl;
    do{
        int guess;
        cin>>guess;
        if(guess == t){
            cout<<"You are right, you took "<<i<<" attempts to guess the number"<<endl;
            break;
        }
        else if(guess > t){
            cout<<"Please guess a smaller number"<<endl;
        }
        else {
            cout<<"Please guess a larger number"<<endl;
        }
        i++;
    }while(1);
    return 0;
}