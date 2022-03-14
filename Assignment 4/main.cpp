/*
Ifrit Maruf
Into to Programming and Fundamentals
CS 1336
Section 012
Due Date: 10/12/18
Date Completed: 10/12/18
Date Submitted: 10/12/18
This program uses random numbers and loops so the user can guess the random number from 1-20.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    //Declare varaibles
    int Random1, guess, guessNumber;
    const int MIN=1, MAX=20;
    
    guessNumber=0;
    
    unsigned seed= time(0);
    srand (seed);
           
    //Generate the random number
    Random1 = (rand()% (MAX-MIN+1)) + MIN;
    
   //Use a loop to guess the random number correctly
    do
    {
        //Guess and enter a number
        cout << "Guess a random number from 1-20" << endl;
        cin >> guess;
        
        if ((guess > Random1) && (guess <= MAX))
            cout << "Too high, try again" << endl;
        else if ( (guess < Random1) && (guess >= MIN))
            cout << "Too low, try again" << endl;
        else
            cout << "You did not guess a number between 1 and 20." << endl;
        
        guessNumber++;
    }
    while (guess != Random1);
    
    // Display this when the user correctly guesses the random number correctly
    cout << "You correctly guessed the random number." << endl;
    cout << "The number of guesses is " << guessNumber << "." << endl;
    
    return 0;
}
