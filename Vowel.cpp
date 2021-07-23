#include<iostream>

using namespace std;

 int main() {
      char c;
      bool isLowerCase, isUpperCase;

      std::cout << "Enter an Alphabet" << '\n';
      std::cin >> c;

      isLowerCase = (c=='a' || c=='e' || c=='i' || c=='o' || c =='u');

      isUpperCase = (c=='A' || c=='E' || c=='I' || c=='O' || c =='U');

      if(!isalpha(c))
        printf("Error! Non Alphabhet character!");
      else if (isLowerCase || isUpperCase)
        std::cout << c << "is a vowel" << '\n';
      else
        std::cout << c << "is consonant" << '\n';
  return 0;
}
