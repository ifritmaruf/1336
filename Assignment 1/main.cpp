

/*
Ifrit Maruf
Programming Fundamentals
1336
012
9/11/18
9/8/18
9/11/18
This program demonstrates the Energy Drink Consumption in a soft drink company
*/

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main ()
{
    int totalPeople, noDrinkPeople, drinkPeople, citrusPeople;
    float noDrink, drink, citrus;
    
    totalPeople= 45500;
    noDrink= .81;
    drink= .19;
    citrus= .68;
    
    // Calculate the approximate number of customers in the survey who don’t purchase any every drink
    noDrinkPeople= totalPeople * noDrink;
    
    // Display the approximate number of customers in the survey who don’t purchase any drink
    cout << "The approximate number of customers in the survey who don’t purchase any drink is " ;
    cout << noDrinkPeople << "." << endl;
    
    // Calculate the approximate number of customers in the survey who purchase one or more energy drinks per week
    drinkPeople= totalPeople * drink;
    
    // Display the approximate number of customers in the survey who purchase one or more energy drinks per week
    cout << "The approximate number of customers in the survey who purchase one or more drinks per ";
    cout << "week is " << drinkPeople << "." << endl;
    
    // Calculate the number of customers in the survey who prefer citrus- flavored energy drinks
    citrusPeople = drinkPeople * citrus;
    
    //Display the number of customers in the survey who prefer citrus- flavored energy drinks
    cout << "The number of customers in the survey who prefer citrus flavored energy drinks is ";
    cout << citrusPeople << "." << endl;
    
    return 0;
}

