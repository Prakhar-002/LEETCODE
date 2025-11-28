#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.3 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution(object):
      def maskPII(self, s):
            # Check if input contains email (identified by '@' symbol)
            if '@' in s:
                  # Convert entire email to lowercase for consistent formatting
                  s = s.lower()
                  # Find position of '@' symbol
                  i = s.index('@')
                  # Mask email: first char + 5 asterisks + last char before '@' + domain
                  # Example: "leetcode@email.com" -> "l*****e@email.com"
                  return s[0] + '*****' + s[i-1:]

            # Handle phone number case - extract only digits from input string
            digits = [c for c in s if c.isdigit()]

            # Get last 10 digits (local phone number portion)
            local = ''.join(digits[-10:])

            # Calculate country code length: total digits minus 10 local digits
            cc = len(digits) - 10

            # Country code prefix: "+**-" if country code exists, empty otherwise
            prefix = '+' + '*' * cc + '-' if cc else ''

            # Format phone number: prefix + "***-***-" + last 4 digits
            # Example: "1(234)567-890" -> "***-***-7890"
            # Example: "+86-(10)12345678" -> "+**-***-***-5678"
            return prefix + '***-***-' + local[-4:]
