// Sales prediction

#include <iostream>

int main()
{
  const int SALES_LAST = 2103419277; //amount of last years sales
  const double SALES_PERC = .18; //percentage by which the sales have increased

  unsigned int sales,nsales;

  //amount of last years sales
  std::cout<< "Last years's sales were " << SALES_LAST << std::endl;

  //calculate amount of this years Sales
  sales = SALES_LAST * SALES_PERC;

  nsales = sales + SALES_LAST;

  //amount of this years Sales
  std::cout<< "This years's sales prediction: " << nsales << std::endl;

  return 0;
}
