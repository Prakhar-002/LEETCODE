//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 273

//? ⌚ Time complexity ➺ O(Log(num))

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <sstream>
using namespace std;

class Solution {
public:
      string numberToWords(int num) {
            if (num == 0) {
                  return "Zero";
            }

            unordered_map<int, string> onesMap = {
                  {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"},
                  {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, {10, "Ten"},
                  {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"},
                  {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"},
                  {19, "Nineteen"}
            };

            unordered_map<int, string> tensMap = {
                  {20, "Twenty"}, {30, "Thirty"}, {40, "Forty"}, {50, "Fifty"},
                  {60, "Sixty"}, {70, "Seventy"}, {80, "Eighty"}, {90, "Ninety"}
            };

            // our final english word
            vector<string> englishWords;

            vector<string> placeValues = {"", " Thousand", " Million", " Billion"};

            // index that will tell the place
            int placeIdx = 0;

            while (num > 0) {
                  // extracting first 3 digit
                  int digits = num % 1000;

                  // get string for this digit
                  string string = getString(digits, onesMap, tensMap);

                  // if it's not an empty string add it in our english word
                  if (!string.empty()) {
                        englishWords.insert(englishWords.begin(), string + placeValues[placeIdx]);
                  }

                  // then divide by 1000 to get next 3 digit
                  num /= 1000;
                  placeIdx++;
            }

            string result;
            for (const auto& word : englishWords) {
                  if (!result.empty()) result += " ";
                  result += word;
            }
            return result;
      }

private:
      // we will process our 3 digit at a time
      string getString(int n, 
            const unordered_map<int, string>& onesMap, 
            const unordered_map<int, string>& tensMap) {

            vector<string> englishWord;

            // first check for Hundreds
            int hundreds = n / 100;
            // if it's not 0 append it in our word
            if (hundreds > 0) {
                  // we take from ones map
                  englishWord.push_back(onesMap.at(hundreds) + " Hundred");
            }

            // get the last two words from it
            int lastTwo = n % 100;
            // check if it's > 20 or not 57
            if (lastTwo >= 20) {
                  int tens = lastTwo / 10;
                  int ones = lastTwo % 10;
                  englishWord.push_back(tensMap.at(tens * 10));
                  // now ones can be 0 or non zero
                  // if not zero
                  if (ones > 0) {
                        englishWord.push_back(onesMap.at(ones));
                  }
            } else if (lastTwo > 0) {
                  englishWord.push_back(onesMap.at(lastTwo));
            }
            // else if we have 00 then do nothing

            string result;
            for (const auto& word : englishWord) {
                  if (!result.empty()) result += " ";
                  result += word;
            }
            return result;
      }
};

// ------------------------------------------------------------

// recursive solution

class Solution {
public:
      vector<string> belowTen = {
            "",
            "One", 
            "Two", 
            "Three", 
            "Four", 
            "Five", 
            "Six", 
            "Seven", 
            "Eight", 
            "Nine"
      };

      vector<string> belowTwenty = {
            "Ten", 
            "Eleven", 
            "Twelve", 
            "Thirteen", 
            "Fourteen", 
            "Fifteen", 
            "Sixteen", 
            "Seventeen", 
            "Eighteen", 
            "Nineteen"
      };

      vector<string> belowHundred = {"", 
            "Ten", 
            "Twenty", 
            "Thirty", 
            "Forty", 
            "Fifty", 
            "Sixty", 
            "Seventy", 
            "Eighty", 
            "Ninety"
      };

      string numberToWords(int num) {
            if(num == 0)
            return "Zero";

            return find(num);
      }

      string find(int num) {
            string englishWord = "";
            if(num<10)
                  englishWord = belowTen[num];
            else
                  if(num<20)
                  englishWord = belowTwenty[num-10];
            else
                  if(num<100)
                  englishWord = belowHundred[num/10] + " " + find(num % 10);
            else
                  if(num<1000)
                  englishWord = find(num/100) + " Hundred " + find(num % 100);
            else
                  if(num<1000000)
                  englishWord = find(num/1000) + " Thousand " + find(num % 1000);
            else
                  if(num<1000000000)
                  englishWord = find(num/1000000) + " Million " + find(num % 1000000);
            else
                  englishWord = find(num/1000000000) + " Billion " + find(num % 1000000000);

            int size = englishWord.length();

            if(size>0 && englishWord[size-1] == ' ')
                  englishWord = englishWord.substr(0, size-1);

            return englishWord;
      }
};