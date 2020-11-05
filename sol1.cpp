#include <iostream>

const unsigned int Sunday = 1;

unsigned int getWeekday(unsigned long long year, unsigned int month, unsigned int day)
{

  if (month <= 2)
  {
    month += 12;
    year--;
  }

  return (day +
          13 * (month + 1) / 5 +
          year + year / 4 - year / 100 + year / 400)
         % 7;
}

int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long y1, y2;
    unsigned int m1, m2, d1, d2;
    std::cin >> y1 >> m1 >> d1;
    std::cin >> y2 >> m2 >> d2;

    if (y2 < y1 || (y2 == y1 && m2 < m1))
    {
      std::swap(y1,  y2);
      std::swap(m1, m2);
    }

    unsigned long long currentYear  = y1;
    unsigned int       currentMonth = m1;
    if (d1 > 1)
    {
      currentMonth++;

      if (currentMonth > 12)
      {
        currentMonth -= 12;
        currentYear++;
      }
    }

    unsigned int sum = 0;

    while (currentYear + 2800 < y2)
    {
      currentYear += 2800;
      sum += 4816;
    }

    while (currentMonth < m2 || currentYear < y2)
    {
      if (getWeekday(currentYear, currentMonth, 1) == Sunday)
        sum++;

      currentMonth++;

      if (currentMonth > 12)
      {
        currentMonth -= 12;
        currentYear++;
      }
    }
    if (getWeekday(currentYear, currentMonth, 1) == Sunday)
      sum++;

    std::cout << sum << std::endl;
  }
  return 0;
}
