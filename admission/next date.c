
#include <stdio.h>
#include <stdbool.h>

// Function prototypes
bool isLeapYear(int year);
int getDaysInMonth(int month, int year);

int main(void) {
  int month, day, year;

  // Prompt the user to enter a date
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  // Check if the current day is the last day of the month
  if (day == getDaysInMonth(month, year)) {
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
  } else {
    // If it's not the last day of the month, just increment the day
    day++;
  }

  // Print the next date
  printf("The next date is: %02d/%02d/%d\n", month, day, year);

  return 0;
}

// Returns true if the specified year is a leap year, false otherwise
bool isLeapYear(int year) {
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      return year % 400 == 0;
    } else {
      return true;
    }
  } else {
    return false;
  }
}

// Returns the number of days in the specified month (in the specified year)
int getDaysInMonth(int month, int year) {
  int days;

  switch (month) {
    case 2:
      // February
      if (isLeapYear(year)) {
        days = 29;
      } else {
        days = 28;
      }
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      // April, June, September, November
      days = 30;
      break;
    default:
      // All other months have 31 days
      days = 31;
  }

  return days;
}

