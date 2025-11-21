/*************************
* Àâòîð: Áàçàíîâ Â.Â. *
* Íàçâàíèå: Âàðèàíò ¹1 *
*************************/


#include <iostream>
#include <string>
#include <map>

using namespace std;

int ConvertToArabic(const string& romanNumeral) {
  map<char, int> romanValues = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
   };
     int total = 0;
     int prevValue = 0;

  for (int elementIndex = romanNumeral.size() - 1; elementIndex >= 0; --elementIndex) {
    char ch = romanNumeral[i];
    int value = romanValues[ch];

    if (value >= prevValue) {
      total += value;
    }
      else {
        total -= value;
      }
    prevValue = value;
    }
  return total;
}

string ConvertToRoman(int number) {
  pair<int, string> romanMap[] = {
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
   };

  string result;

   for (pair <int, string> pair : romanMap) {
     while (number >= pair.first) {
       result += pair.second;
       number -= pair.first;
     }
   }
   return result;
}

int main() {
  int choice;
    cout << "Choose the translation mode:\n";
         << "1 - Arabic number to Roman numeral\n";
         << "2 - Roman number to Arabic numeral\n";
         << "please enter the transaction number: ";
    cin >> choice;
    
    if (choice == 1) {
      int number;
      cout << "enter an Arabic numeral: ";
      cin >> number;
      cout << "conversion result: " << ConvertToRoman(number) << endl;
    }
      else if (choice == 2) {
        string romanNumeral;
        cout << "enter the Roman numeral: ";
        cin >> romanNumeral;
        cout << "conversion result: " << ConvertToArabic(romanNumeral) << endl;
      }
        else {
          cout << "Error: incorrect choice." << endl;
        }
  return 0;

}


