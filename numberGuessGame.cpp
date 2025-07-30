#include <bits/stdc++.h>
using namespace std;
int main(){

    srand(time(0));
    int secretNumber = rand() % 100;
    int guess;

    cout << "Welcome to the Guess the Number Game!!!\n";
    cout<<endl;
    //cout << "Random number: " << secretNumber << endl;
    
    do{
        cout<<"Enter Your Number :";
        cin>> guess;   
        
        if (guess < secretNumber)
            cout << "Too low! Try again.\n";
        else if (guess > secretNumber)
            cout << "Too high! Try again.\n";
        else
            cout << "Correct! You guessed it!\n";

    } while (guess != secretNumber);

    return 0;
}