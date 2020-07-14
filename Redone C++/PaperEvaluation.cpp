#include<iostream>
#include <string>

using namespace std;
// Function definition 
string findsPaperStatus(double[], double, int);
int main()
{
   const int criteria = 5;
   const int reviewer = 4;
   int scores[reviewer][criteria];
   double AvgReviewerScore[reviewer];
   string status;
   // A For Loop that asks the user to input values for the Reviewer, Criteria Idea, Novelty, Contribution, Paper Organization & Perfomance Evaluation
   for (int i = 0; i < reviewer; i++)
   {
       cout << "Enter the score for Reviewer " << (i + 1) << ":" << endl;
       cout << "Enter score for criteria Idea: ";
       cin >> scores[i][0];
       cout << "Enter score for criteria Novelty: ";
       cin >> scores[i][1];
       cout << "Enter score for criteria Contribution: ";
       cin >> scores[i][2];
       cout << "Enter score for criteria Paper Organizaition: ";
       cin >> scores[i][3];
       cout << "Enter score for criteria Perfomance Evaluation: ";
       cin >> scores[i][4];
       cout << endl;
   }
   double sum = 0;
   // A For Loop that calculates the sum 
   for (int i = 0; i < reviewer; i++)
   {
       sum = 0;
       for (int j = 0; j < criteria; j++)
           sum += scores[i][j];
       AvgReviewerScore[i] = sum / criteria;
   }
   // A For Loop that calculates the average score 
   double totalAvgScore;
   sum = 0;
   for (int i = 0; i < reviewer; i++)
   {
       sum += AvgReviewerScore[i];
   }
   totalAvgScore = sum / reviewer;

   status= findsPaperStatus(AvgReviewerScore, totalAvgScore, reviewer);
   cout << "\nPaper Status : " << status << endl;
   system("pause");
   return 1;
}
// A String Function that passes the args of the AvgScore, finalAvg based on the numbers of the Reviewers
string findsPaperStatus(double avgScore[], double finalAvg, int numReviewer)
{
  // If the Average Score is less than 5, the Paper is Rejected  
   for (int i = 0; i < numReviewer; i++)
   {
       if (avgScore[i] < 5)
           return "Rejected";
   }
   // If the Average greater than or equal to 6 or less than 5. It's Borderline
   if (finalAvg >= 6 && finalAvg < 7)
       return "Borderline";
       // If it doesn't meet that criteria then the paper is accepted. 
   return "Accepted";
}