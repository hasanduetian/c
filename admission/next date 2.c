#include <stdio.h>

int main(void) {
  int month, day, year;
  int daysInMonth;

  // Prompt the user to enter a date
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  // Determine the number of days in the current month
  if (month == 2) {
    // February
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
      // Leap year
      daysInMonth = 29;
    }
    else {
      daysInMonth = 28;
    }
  }

  else if (month == 4 || month == 6 || month == 9 || month == 11) {
    // April, June, September, November
    daysInMonth = 30;
  }
  else {
    // All other months have 31 days
    daysInMonth = 31;
  }

  // Check if the current day is the last day of the month
  if (day == daysInMonth) {
    // If it is, set the day to the first of the next month
    day = 1;

    // Check if the current month is December
    if (month == 12) {
      // If it is, set the month to January of the next year
      month = 1;
      year++;
    } else {
      // If it's not December, just increment the month
      month++;
    }
  }


   else {
    // If it's not the last day of the month, just increment the day
    day++;
  }

  // Print the next date
  printf("The next date is: %02d/%02d/%d\n", month, day, year);

  return 0;
}
