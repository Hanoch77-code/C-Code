#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  // Gross Salary(GS) = Basic Salary(BS) + Dearness Allowance(DA) + House Rent Allowance(HRA);
  // Initialize All the Variables
  int basic_salary_bs = 0, da, hra, gs;

  // Input the BS
  printf("Input your Basic Salary(BS):-");
  scanf("%d", &basic_salary_bs);

  // Calculate DA(40%) and HRA(20%)
  da = basic_salary_bs * 40 / 100; // Integer division
  hra = basic_salary_bs * 20/ 100; // Integer division

  // Gross Salary
  gs = basic_salary_bs + da + hra;

  // Output
  printf("\nThe Gross Salary is %d.\n", gs);
  return 0;
}

