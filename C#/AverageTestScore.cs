/*
Project Name: AverageTestScore
Name: Tristen Stegall
Date: 1/31/2024
Description: Program 2-13, page 59 - The Average Test Score
Language: Rust
Editor: OnlineGDB
*/
using System;
class HelloWorld {
    static void Main() {
	    double test1, test2, test3, average;
        test1 = 88.0;
        test2 = 92.5;
        test3 = 97.0;
        
        average = (test1 + test2 + test3) / 3.0;
        Console.WriteLine("Your average test score is " + average);
    }
}
