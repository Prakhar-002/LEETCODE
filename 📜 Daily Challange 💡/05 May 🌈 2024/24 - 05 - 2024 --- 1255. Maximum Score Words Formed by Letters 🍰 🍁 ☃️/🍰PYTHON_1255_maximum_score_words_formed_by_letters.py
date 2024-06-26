#! https://github.com/Prakhar-002/LEETCODE


#Todo 📌 QUESTION NUMBER 1255 

from collections import Counter

class Solution:
    def maxScoreWords(self, words: List[str], letters: List[str], score: List[int]) -> int:
        letter_count = Counter(letters) # This will make a hashmap which stores the letters and their freq in letters list

        def can_form_word(word, letter_count):
            word_count = Counter(word) # make a hashmap which will store the count of each word available in our words[i]

            # we will check for every char count from our letter_count ... does we have enough letters available ? 

            for char in word_count: 
                if word_count[char] > letter_count[char]: # word_count[char] --> check the no of time one char comes in words[i]
                    return False # If does return false
                
            return True # if does't return true

#-----------------------------------------------------
        # this function will count the score of one word from our score array
        def get_score(word):
            res = 0

            for char in word :
                res += score[ord(char) - ord('a')]

            return res

#-------------------------------------------------

        # backtracking function 

        def backtracking(i):
            # Base case  --> If we reach the last index return 0 because no word will be available 
            if i == len(words):
                return 0
            
            # Step - 1 when we skill the word just go to next step and store it into res
            res = backtracking(i + 1)

            # Step - 2 if we can add a word

            # first check can we add the word mean --> is we have enough letters remain in our hashmap to include the word

            if can_form_word(words[i], letter_count):
                # 1. first add one word ( Take one step and update our letter_count)
                for char in words[i]:
                    letter_count[char] -= 1

                # 2. go to next step ... but we have to maximize our res so 
                # 2.1. But before going to further step ... we have to add the score of that word from score array
                res = max(res, get_score(words[i]) + backtracking(i + 1))

                # 3. backtrack to another path and add the words[i] char count in our letter_count
                for char in words[i]:
                    letter_count[char] += 1

            # we gonna return our res which we have to maximize 
            return res
        return backtracking(0)


