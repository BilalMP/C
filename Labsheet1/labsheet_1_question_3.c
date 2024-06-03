/*
Write a program that asks the user his id number (use a simple integer value), score in
CSE1017Y and CSE1019Y and output the user’s id with his average score.
*/
#include <stdio.h>
#include <math.h>
int main()
{
   int idnum, score_1, score_2, average;
   printf("Enter the id of student : ");
   scanf("%d", &idnum);
   printf("Enter the score of CSE1017Y of the student : ");
   scanf("%d", &score_1);
   printf("Enter the score of CSE1019Y of the student : ");
   scanf("%d", &score_2);
   average = (score_1 + score_2) / 2;
   printf("The average mark is %d with id number %d \n", average, idnum);
   return 0;
}