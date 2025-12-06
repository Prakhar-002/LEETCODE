//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.5 Q2

//? ⌚ Time complexity ➺ O(m^n * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

var restoreIpAddresses = function (s) {
      const answer = [];

      // Check if s[start : start+length] is a valid IP segment
      function valid(s, start, length) {
            // Single digit segment is always valid: "0"–"9"
            if (length === 1) return true;

            // Leading zero not allowed for multi-digit segments
            if (s[start] === '0') return false;

            // Length 2: "10"–"99", always <= 255
            if (length === 2) return true;

            // Length 3: all 3-digit numbers "000"–"999", check <= "255"
            const segment = s.slice(start, start + length);
            return segment <= "255";
      }

      // Backtracking helper
      function helper(s, startIndex, dots) {
            const remainingLength = s.length - startIndex;
            const remainingNumberOfIntegers = 4 - dots.length;

            // Pruning: impossible to form 4 segments
            if (remainingLength > remainingNumberOfIntegers * 3 ||
                  remainingLength < remainingNumberOfIntegers) {
                  return;
            }

            // If 3 segments chosen, remaining substring must form the 4th
            if (dots.length === 3) {
                  if (valid(s, startIndex, remainingLength)) {
                        let temp = "";
                        let last = 0;
                        for (const len of dots) {
                              temp += s.slice(last, last + len) + ".";
                              last += len;
                        }
                        temp += s.slice(startIndex);
                        answer.push(temp);
                  }
                  return;
            }

            // Try lengths 1 to 3 for the next segment
            for (let curPos = 1; curPos <= 3 && curPos <= remainingLength; curPos++) {
                  dots.push(curPos);
                  if (valid(s, startIndex, curPos)) {
                        helper(s, startIndex + curPos, dots);
                  }
                  dots.pop();
            }
      }

      helper(s, 0, []);
      return answer;
};
