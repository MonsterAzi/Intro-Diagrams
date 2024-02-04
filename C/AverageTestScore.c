/*
Project Name: AverageTestScore
Name: Tristen Stegall
Date: 1/31/2024
Description: Program 2-13, page 59 - The Average Test Score
Language: C
Editor: OnlineGDB
*/
#include <stdio.h>

int main()
{
    float test1, test2, test3, average;
    test1 = 88.0;
    test2 = 92.5;
    test3 = 97.0;
    
    average = (test1 + test2 + test3) / 3.0;
    printf("Your average test score is %.1f", average);
}