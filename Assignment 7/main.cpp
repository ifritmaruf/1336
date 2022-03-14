/*
 Ifrit Maruf
 Course Name: Programming Fundamentals
 Course Number: CS 1336
 Section: 012
 Due Date: 12/1/18
 Date Completed: 11/30/18
 Date Submitted: 11/30/18
 */

#include <iostream>

using namespace std;
int main()
{
    //Declare Varibles for correct and incorrect
    int totalCorrect=0, totalIncorrect=0;
    const int QUESTIONS = 20;
    //Array for answer key
    char answerKey[QUESTIONS] = {'A','D','B','B','C','B', 'A', 'B', 'C', 'D',
        'A','C', 'D','B', 'D', 'C', 'C', 'A', 'D', 'B'};
    //Array for students answer
    char answerStudent[QUESTIONS];
    
    //Enter in students answers
    for (int i = 0; i < QUESTIONS; i++) {
        do {
            cout << "Enter answer for question " << i + 1 << " " << endl;
            cin >> answerStudent[i];
            
            //Input validation
            if (answerStudent[i] != 'A' && answerStudent[i] != 'B' && answerStudent[i] != 'C' && answerStudent[i] != 'D') {
                cout << "Input Validation: Only accept the letters A, B, C, or D as answers" << endl;
            }
        } while (answerStudent[i] != 'A' && answerStudent[i] != 'B' && answerStudent[i] != 'C' && answerStudent[i] != 'D');
        
        //If the stuent gets the answer correct
        if ( answerKey[i]== answerStudent[i])
        {
            //One more correct answer
            totalCorrect++;
        }
        else
        {
            //Display correct answer
            cout << "Correct answer for question " << i+1 << ": " << answerKey[i] << endl;
            //One more incorrect answer
            totalIncorrect++;
        }
    }
    if(totalCorrect >= 15)
    {
        //If you get 15 or more correct answers
        cout << "You passed the exam!" << endl;
    }
    else
    {
        ////If you get less than 15 correct answers
        cout << "You failed the exam." << endl;
    }
    //End the program
    return 0;
}
