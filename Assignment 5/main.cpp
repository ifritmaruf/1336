/*
 Ifrit Maruf
 Programming Fundamentals
 CS 1336
 Section 12
 Due: 10/21/18
 Date Completed: 10/20/18
 Date Submitted: 10/20/18
*/

#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    //Declare variables
    int store1, store2, store3, store4, store5;
    
    //Enter the sales for each store
    cout << "Enter todays sales for 5 stores" << endl;
    cin >> store1;
    cin >> store2;
    cin >> store3;
    cin >> store4;
    cin >> store5;
    
    //Create the file
    ofstream outputFile;
    //Open the file
    outputFile.open ("salesbarchart.txt");
    
    //Store the sales in the file
    outputFile << "Enter today's sales for store 1: " << store1 << "[Enter]" << endl;
    outputFile << "Enter today's sales for store 2: " << store2 << "[Enter]" << endl;
    outputFile << "Enter today's sales for store 3: " << store3 << "[Enter]" << endl;
    outputFile << "Enter today's sales for store 4: " << store4 << "[Enter]" << endl;
    outputFile << "Enter today's sales for store 5: " << store5 << "[Enter]" << endl;
    
    //Store the headers of the bar chart
    outputFile << endl;
    outputFile << "SALES BAR CHART" << endl;
    outputFile << endl;
    outputFile << "(Each * = $100)" << endl;
    outputFile << endl;
    
    outputFile << "Store 1: ";
    
    //Display the sales on the screen
    cout << "Enter today's sales for store 1: " << store1 << "[Enter]" << endl;
    cout << "Enter today's sales for store 2: " << store2 << "[Enter]" << endl;
    cout << "Enter today's sales for store 3: " << store3 << "[Enter]" << endl;
    cout << "Enter today's sales for store 4: " << store4 << "[Enter]" << endl;
    cout << "Enter today's sales for store 5: " << store5 << "[Enter]" << endl;
    
    //Display the headers of the bar chart
    cout << endl;
    cout << "SALES BAR CHART" << endl;
    cout << endl;
    cout << "(Each * = $100)" << endl;
    cout << endl;
    
    cout << "Store 1: ";

//Use a while loop to display the bar chart
   while (store1>=100)
   {
       //Display for each 100
       cout << "*";
       
       //Store for each 100
       outputFile << "*";
       store1= store1-100;
   }
    cout << endl;
    outputFile << endl;
    
    cout << "Store 2: ";
    outputFile << "Store 2: ";
    while (store2>=100)
    {
        //Display for each 100
        cout << "*";
        
        //Store for each 100
        outputFile << "*";
        store2= store2-100;
    }
    cout << endl;
    outputFile << endl;
    
    cout << "Store 3: ";
    outputFile << "Store 3: ";
    while (store3>=100)
    {
        //Display for each 100
        cout << "*";
        //Store for each 100
        outputFile << "*";
        store3= store3-100;
    }
    cout << endl;
    outputFile << endl;
    
     cout << "Store 4: ";
    outputFile << "Store 4: ";
    while (store4>=100)
    {
        //Display for each 100
        cout << "*";
        
        //Store for each 100
        outputFile << "*";
        store4= store4-100;
    }
    cout << endl;
    outputFile << endl;
    
    cout << "Store 5: ";
    outputFile << "Store 5: ";
    while (store5>=100)
    {
        //Display for each 100
        cout << "*";
        //Store for each 100
        outputFile << "*";
        store5 = store5-100;
    }
    cout << endl;
    outputFile << endl;
    
    //Close the file
    outputFile.close();
    return 0;
    
}
