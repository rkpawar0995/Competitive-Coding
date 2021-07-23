#include<iostream>

using namespace std;

int main() {
  int number;

  std::cout << "Enter an Integer" << '\n';
  std::cin >> number;

  if (number > 0){
    std::cout << "you entered a positive number" << '\n';
  }
  std::cout << "This is always executed" << '\n';
  return 0;
}
