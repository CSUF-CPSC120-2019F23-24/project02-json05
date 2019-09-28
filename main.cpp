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
  std::string hotel_string;
  hotel_string = std::to_string(hotel);
  hotel_string = hotel_string.substr(0, hotel_string.find('.') + 3);

  // Asks cost of meal.
  std::cout << "What is the total meal expense? $";
  std::cin >> meal;
  std::string meal_string;
  meal_string = std::to_string(meal);
  meal_string = meal_string.substr(0, meal_string.find('.') + 3);

  // Calculate total cost of hotel and meal.
  double total = hotel + meal;
  std::string total_string;
  total_string = std::to_string(meal);
  total_string = total_string.substr(0, total_string.find('.') + 3);

  // Skips line for spacing.
  std::cout << '\n';

  // Displays trip information.
  std::cout << std::left << std::setw(15) << "Location" << std::right << std::setw(12) << "Days" << std::setw(12) << "Hotel" << std::setw(12) << "Meal" << std::setw(12) << "Total\n";
  std::cout << std::left << std::setw(15) << location.substr(0,14) << std::right << std::setw(12) << days << std::setw(7) << "$" << hotel_string << std::setw(7) << "$" << meal_string << std::setw(6) << "$" << total_string << '\n';

return 0;
}
