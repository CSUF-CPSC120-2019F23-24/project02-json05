// Name: Jason Le
// This program calculates and displays business expenses.

#include <iostream>
#include <string>
#include <iomanip>
int main()
{

  double days, hotel, meal;
  // Welcome
  std::cout << "Welcome to the Business Trip Tracker!\n";

  // Skips line for spacing.
  std::cout << '\n';

  // Asks location of trip.
  std::cout << "What is the business trip location? ";
  std::string location;
  getline(std::cin, location);

  // Asks number of days the trip will take.
  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  // Asks cost of hotel.
  std::cout << "What is the total hotel expense? $";
  std::cin >> hotel;

  // Asks cost of meal.
  std::cout << "What is the total meal expense? $";
  std::cin >> meal;

  // Calculate total cost of hotel and meal.
  double total = hotel + meal;

  // Skips line for spacing.
  std::cout << '\n';

  // Displays trip information.
  std::cout << "Location" << std::setw(20) << "Days" << std::setw(12) << "Hotel" << std::setw(12) << "Meal" << std::setw(12) << "Total\n";
  std::cout << location.substr(0, 20) << std::setw(16) << days << std::setw(10) << "$" << hotel << std::setw(10) << "$" << meal << std::setw(10) << "$" << total << '\n';

return 0;
}
