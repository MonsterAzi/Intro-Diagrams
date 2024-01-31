/*
Project Name: AverageTestScore
Name: Tristen Stegall
Date: 1/31/2024
Description: Program 2-13, page 59 - The Average Test Score
Language: C++ 20
Editor: OnlineGDB
*/
#include <iostream>

using namespace std;

int main()
{
    float test1, test2, test3, average;
    test1 = 88.0;
    test2 = 92.5;
    test3 = 97.0;
    
    average = (test1 + test2 + test3) / 3.0;
    cout<<"Your average test score is ";
    cout<<average;
}
