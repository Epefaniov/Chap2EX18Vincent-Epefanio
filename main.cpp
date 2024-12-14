/*
Assingment: Chapter 2 Excersise 18

  Date:12/13/2024

  Programmer: Vincent Epefanio

  Requriements: A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following:

• The approximate number of customers in the survey who purchase one or more energy drinks per week.

• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so 

that the user can enter the number of the number of customers that were surveyed 

Be sure you have posted your code to GitHub and submitted the URL   for that project in Canvas

Also be sure you have tested your code - I won't grade your submission if it doesn't get

a clean compile.

  */

#include <iostream>
using namespace std;

int main() {
    // Given data
    int totalCustomers = 16500;  // Total number of customers surveyed
    double percentPurchaseEnergyDrinks = 0.15;  // 15% of customers purchase energy drinks
    double percentPreferCitrus = 0.58;  // 58% of energy drink buyers prefer citrus-flavored

    // Calculate the number of customers who purchase energy drinks
    int customersWithEnergyDrinks = totalCustomers * percentPurchaseEnergyDrinks;

    // Calculate the number of customers who prefer citrus-flavored energy drinks
    int customersPreferCitrus = customersWithEnergyDrinks * percentPreferCitrus;

    // Display the results
    cout << "Approximate number of customers who purchase energy drinks per week: " << customersWithEnergyDrinks << endl;
    cout << "Approximate number of customers who prefer citrus-flavored energy drinks: " << customersPreferCitrus << endl;

    return 0;
}
