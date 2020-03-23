/* Write a program that prompts the user to enter five test scores and then prints
the average test score. (Assume that the test scores are decimal numbers.) */

// Author: Otumian-Empire
// Programe: average program
// About: A program that take 5 test scores and returns the average

/*
Proble definition:
    find the average of five numbers
Analysis:
    input: five test scores
    output: average of the five test scores
    process:
        find the sum of the test scores and divide it by 5
Design:
   let sum and average the sum and average of the test scores respectively
   let score1, score2, score3, score4 and score5 be scores

   prompt the user for the first score and assign it to score1
   prompt the user for the second score and assign it to score2
   prompt the user for the third score and assign it to score3
   prompt the user for the fourth score and assign it to score4
   prompt the user for the fifth score and assign it to score5

   sum = score1 + score2 + score3 + score4 + score5
   average = sum / double(5)

   display average
*/

#include <iostream>

int main()
{
    double sum, average, score1, score2, score3, score4, score5;

    std::cout << "Enter the first score: ";
    std::cin >> score1;

    std::cout << "Enter the second score: ";
    std::cin >> score2;

    std::cout << "Enter the third score: ";
    std::cin >> score3;

    std::cout << "Enter the fourth score: ";
    std::cin >> score4;

    std::cout << "Enter the fifth score: ";
    std::cin >> score5;

    sum = score1 + score2 + score3 + score4 + score5;
    average = sum / 5;

    std::cout << "The average is " << average << std::endl;

    return 0;
}
