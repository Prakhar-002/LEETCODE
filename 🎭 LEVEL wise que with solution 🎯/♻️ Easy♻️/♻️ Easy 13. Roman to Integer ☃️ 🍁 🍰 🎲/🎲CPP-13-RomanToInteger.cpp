//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 13

//? ⌚ Time complexity -> O(n) 👉 length of s

//? 🧺 Space complexity -> O(1)

#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution{
public: 
      int romanToInt(string s){
            unordered_map<char, int> roman_values = {
                  {'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};

            vector<int> array;
            for (char c : s){
                  array.push_back(roman_values[c]);
            }

            int sum = 0;
            for (int i = 0; i < array.size(); ++i){
                  if (i == array.size() - 1){
                        sum += array[i];
                  }
                  else if (array[i] >= array[i + 1]){
                        sum += array[i];
                  }
                  else{
                        sum -= array[i];
                  }
            }

            return sum;
      }
};