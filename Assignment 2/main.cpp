//
//  main.cpp
//  Assignment_2
//
//  Created by Ifrit Maruf on 9/13/18.
//  Copyright © 2018 Ifrit Maruf. All rights reserved.

/*
 Ifrit Maruf
 Programming Fundamentals
 CS 1336
 012
 Due Date: 9/18/18
 Date Completed: 9/18/18
 Date Submitted: 9/18/18
 This program computes the stock transaction of Joe in Amity Software Inc.
 */

 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main ()

{
    int purchaseShare, soldShare;
    float priceBuyShare, priceSoldShare, paidCommission, soldCommission, paidStock, brokerPaidCommission, soldStock;
    double brokerSoldCommission, profit;
    
    cout << setprecision(2) << fixed;
    
    // This calculates Joe's purchase of stocks
    
    cout << "Enter the number of shares Joe purchased" << endl;
    cin >> purchaseShare;
    
    cout << "Enter the price of the stock per share" << endl;
    cin >> priceBuyShare;
    
    cout << "Enter the commission percentage that Joe paid" << endl;
    cin >> paidCommission;
    
    paidStock = purchaseShare * priceBuyShare;
    brokerPaidCommission = paidStock * (paidCommission / 100);
    
    // This calculates Joe's selling of stocks
    
    cout << "Enter the number of shares Joe sold" << endl;
    cin >> soldShare;
    
    cout << "Enter the price he sold the stock per share" << endl;
    cin >> priceSoldShare;
    
    cout << "Enter the commission percentage that Joe sold it for" << endl;
    cin >> soldCommission;
    
    soldStock = soldShare * priceSoldShare;
    brokerSoldCommission = soldStock * (soldCommission / 100);
    
    // This equation demonstrates the profit Joe got
    profit = soldStock - paidStock- brokerSoldCommission - brokerPaidCommission;
    
    // This displays Joe's purchase of stocks
    cout << "The amount of money Joe paid for the stock was $" << paidStock << endl;
    cout << "The amount of commission Joe paid his broker when he bought the stock was $" << brokerPaidCommission << endl;
    
    cout << "The amount of money Joe sold the stock for was $" << soldStock << endl;
    cout << "The amount of commission Joe paid his broker when he sold the stock was $" << brokerSoldCommission << endl;
    
    cout << "The amount of profit Joe made after selling the stock and paying the two commissions to his " << endl;
    cout << "broker was $" << profit << endl;
    
    return 0;
}
