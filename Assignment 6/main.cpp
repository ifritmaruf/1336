/*
 Ifrit Maruf
 Programming Fundamentals
 CS 1336
 Section:012
 Due Date:11/25/18
 Date Completed: 11/22/18
 Date Submitted: 11/22/18
 */

#include <iostream>
#include <iomanip> //This is for set precision

using namespace std;

//Prototypes
void getJudgeData(double &);
void calcScore(double &, double &, double &, double &, double &);
int findLowest(double, double, double, double, double);
int findHighest(double, double, double, double, double);


int main()
{
    //Declare variables
    double score1, score2, score3, score4, score5;
    
    //Call the function for each of the 5 judges
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);
    
    //Call the function to calculate the score
    calcScore(score1, score2, score3, score4, score5);
    
    return 0;
}

void getJudgeData (double &judgeScore)
{
    //Ask user for judge score
    cout << "What is the judges score" << endl;
    //Enter in the judge score
    cin >> judgeScore;
    //Judge score cannot be less than 0 or more than 10
    while (judgeScore <0 || judgeScore >10)
    {
        cout << "Do not accept judge scores lower than 0 or higher than 10." << endl;
        //Enter in judge score again
        cin >> judgeScore;
    }
    
}

void calcScore(double &score1, double &score2, double &score3,  double &score4, double &score5)
{
    //Declare variables
    double totalScore, avgScore, lowest, highest;
    
    //Calculate total score
    totalScore = score1 + score2 + score3 + score4 + score5;
    //Call the function and assign it to lowest
    lowest = findLowest(score1, score2, score3, score4, score5);
    //Call the function and assign it to highest
    highest = findHighest(score1, score2, score3, score4, score5);
    
    //Calculate the average score
    avgScore= (totalScore-lowest-highest)/3;
    //Output the score
    cout << fixed << showpoint << setprecision(2) << "The average of the three scores that remain is " << avgScore << endl;
    
}

int findLowest(double pointsL1, double pointsL2, double pointsL3, double pointsL4, double pointsL5)
{
    //Declare variable
    double lowestScore;
    
    //Use if else if to find the lowest score
    if ((pointsL1<=pointsL2) && (pointsL1<=pointsL3) && (pointsL1<=pointsL4) && (pointsL1 <=pointsL5))
        lowestScore= pointsL1;
    else if ((pointsL2<=pointsL1) && (pointsL2<=pointsL3) && (pointsL2<=pointsL4) && (pointsL2 <=pointsL5))
        lowestScore=pointsL2;
    else if ((pointsL3<=pointsL1) && (pointsL3<=pointsL2) && (pointsL3<=pointsL4) && (pointsL3 <=pointsL5))
        lowestScore= pointsL3;
    else if ((pointsL4<=pointsL1) && (pointsL4<=pointsL2) && (pointsL4<=pointsL3) && (pointsL4 <=pointsL5))
        lowestScore= pointsL4;
    else if ((pointsL5<=pointsL1) && (pointsL5<=pointsL2) && (pointsL5<=pointsL3) && (pointsL5<=pointsL4))
        lowestScore=pointsL5;
    else
    {
        cout << "All scores are the same." << endl;
        lowestScore = pointsL1;
    }
    //Return the lowest score
    return lowestScore;
    
}

int findHighest(double pointsH1, double pointsH2, double pointsH3, double pointsH4, double pointsH5)
{
    //Declare variable
    double highestScore;
    
    //Use if else if to find the highest score
    if ((pointsH1>=pointsH2) && (pointsH1>=pointsH3) && (pointsH1>=pointsH4) && (pointsH1>=pointsH5))
        highestScore= pointsH1;
    else if ((pointsH2>=pointsH1) && (pointsH2>=pointsH3) && (pointsH2>=pointsH4) && (pointsH2 >=pointsH5))
        highestScore=pointsH2;
    else if ((pointsH3>=pointsH1) && (pointsH3>=pointsH2) && (pointsH3>=pointsH4) && (pointsH3 >=pointsH5))
        highestScore= pointsH3;
    else if ((pointsH4>=pointsH1) && (pointsH4>=pointsH2) && (pointsH4>=pointsH3) && (pointsH4 >=pointsH5))
        highestScore= pointsH4;
    else if ((pointsH5>=pointsH1) && (pointsH5>=pointsH2) && (pointsH5>=pointsH3) && (pointsH5>=pointsH4))
        highestScore=pointsH5;
    else
    {
        cout << "All scores are the same." << endl;
        highestScore= pointsH1;
    }
    //Return the lowest score
    return highestScore;
}


