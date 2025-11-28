//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.3 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var maskPII = function (s) {
      // Check for email by '@' presence
      if (s.includes("@")) {
            s = s.toLowerCase();
            let atIndex = s.indexOf('@');
            // Mask first char + 5 asterisks + last char before '@' + domain
            // e.g. "LeetCode@Email.com" -> "l*****e@email.com"
            return s[0] + "*****" + s.slice(atIndex - 1);
      }

      // Extract digits only from string
      let digits = s.match(/\d/g);

      // Last 10 digits: local phone number
      let local = digits.slice(-10).join("");
      let cc = digits.length - 10;  // country code length

      // Country code prefix "+**-" if cc exists, else empty string
      let prefix = cc > 0 ? "+" + "*".repeat(cc) + "-" : "";

      // Format masked number "***-***-last4"
      return prefix + "***-***-" + local.slice(-4);
};
