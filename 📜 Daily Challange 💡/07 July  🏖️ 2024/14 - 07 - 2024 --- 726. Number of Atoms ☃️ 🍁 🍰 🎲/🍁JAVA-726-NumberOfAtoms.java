//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 726

//? ⌚ Time complexity -> O(n) 👉 No. of Char in String (Formula) 

//? 🧺 Space complexity -> O(n) 👉 USing A Stack of HashMap

import java.util.*;

class Solution {
      public String countOfAtoms(String formula) {
            // Making a stack of HashMap
            Stack<Map<String, Integer>> stack = new Stack<>();
            stack.push(new HashMap<>());
            // iterator
            int i = 0;

            while (i < formula.length()) {
                  // There are three case possible
                  // 1st case open parenthesis
                  if (formula.charAt(i) == '(') {
                        // if we get a open parenthesis we add a new HashMap
                        // cause we store HashMap according parenthesis
                        stack.push(new HashMap<>());

                        // 2nd case close parenthesis
                  } else if (formula.charAt(i) == ')') {
                        // if we get a close parenthesis we end up with the last HashMap
                        // so we will merge last HashMap with 2nd last HashMap
                        Map<String, Integer> curMap = stack.pop();

                        // Count for that number occurrence after the parenthesis ()'2'
                        int count = 0;

                        // Now extract the number
                        while (i + 1 < formula.length() && Character.isDigit(formula.charAt(i + 1))) {
                              count = count * 10 + Character.getNumericValue(formula.charAt(i + 1));
                              i++;
                        }

                        count = count == 0 ? 1 : count;

                        // get the 2nd last HashMap and merge the Last (current) HashMap with 2nd last
                        Map<String, Integer> previousMap = stack.peek();

                        for (String elem : curMap.keySet()) {
                              // we multiply with number occur after parenthesis
                              previousMap.put(elem, previousMap.getOrDefault(elem, 0) + curMap.get(elem) * count);
                        }

                        // 3rd elem and it's count
                  } else {
                        // Extract the elem cause It can be one digit
                        StringBuilder element = new StringBuilder();
                        element.append(formula.charAt(i));
                        // Count for that number occurrence
                        int count = 0;

                        // for elem if It is 2 digit then
                        if (i + 1 < formula.length() && Character.isLowerCase(formula.charAt(i + 1))) {
                              element.append(formula.charAt(i + 1));
                              i++;
                        }

                        // Now extract the number
                        while (i + 1 < formula.length() && Character.isDigit(formula.charAt(i + 1))) {
                              count = count * 10 + Character.getNumericValue(formula.charAt(i + 1));
                              i++;
                        }

                        // count will 1 if no number present after elem => ON
                        count = count == 0 ? 1 : count;
                        // get the last HashMap
                        Map<String, Integer> curMap = stack.peek();
                        // add the elem along with It's count
                        curMap.put(element.toString(), curMap.getOrDefault(element.toString(), 0) + count);
                  }

                  // inc the count
                  i++;
            }

            // after all parenthesis and going through whole formula 
            // there'll only one HashMap left
            Map<String, Integer> cntMap = stack.peek();
            StringBuilder countAtom = new StringBuilder();

            List<String> sortedKeys = new ArrayList<>(cntMap.keySet());
            Collections.sort(sortedKeys);

            for (String elem : sortedKeys) {
                  countAtom.append(elem);
                  if (cntMap.get(elem) > 1) {
                        countAtom.append(cntMap.get(elem));
                  }
            }

            return countAtom.toString();
      }
}
