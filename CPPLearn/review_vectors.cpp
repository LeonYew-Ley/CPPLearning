// Write a program to find the sum of even numbers and the product of odd numbers in a vector.

#include <iostream>
#include <vector>

int main()
{
  std::vector<int> nums = {2, 4, 3, 6, 1, 9};
  int sum_even_nums = 0;
  int product_ood_numbers = 1;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] % 2 == 0)
    {
      sum_even_nums += nums[i];
    }
    else
    {
      product_ood_numbers *= nums[i];
    }
  }

  std::cout << "Sum of even numbers is " << sum_even_nums << std::endl;
  std::cout << "Product of odd numbers is " << product_ood_numbers << std::endl;
}