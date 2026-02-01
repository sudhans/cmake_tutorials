#include <iostream>

#include "my_math/add.h"
#include "my_print/print.h"
#include "my_math/div.h"

int main() {
  float first_no, second_no, result_add, result_div;
  std::cout<< "Enter first number \t";
  std::cin>> first_no;
  std::cout<< "Enter second number \t";
  std::cin>> second_no;
  result_add = add(first_no, second_no);
  result_div = div(first_no, second_no);

  printResult ("Addition", result_add);
  printResult ("Division", result_div);
  return 0;
}	
