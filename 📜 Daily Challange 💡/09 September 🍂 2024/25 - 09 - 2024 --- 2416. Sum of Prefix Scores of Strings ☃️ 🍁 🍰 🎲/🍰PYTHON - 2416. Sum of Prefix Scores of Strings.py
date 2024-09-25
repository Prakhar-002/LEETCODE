#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2416

#? ⌚ Time complexity ➺ O(n * l * l) 👉🏻  n = len(words) l = avg len(each word)

#? 🧺 Space complexity ➺ O(n * l) 

from collections import defaultdict

class Solution:
      def sumPrefixScores(self, words: List[str]) -> List[int]:
            # an empty list that will eventually contain the prefix scores for each word
            answer = []

            # used to keep track of how many times each prefix appears
            countWord = defaultdict(int)

            # iterates over each word
            for word in words:
                  # For each word, it generates all possible prefixes by slicing the word
                  for i in range(len(word)):
                        # up to each character in sequence from the first character to the last
                        # count is incremented by 1
                        countWord[word[ : i + 1]] += 1

            # iterates over each word
            for word in words:
                  # For each word, initializes a variable `score` to `zero`
                  score = 0
                  # generates all possible prefixes for the word same as upper loop
                  for i in range(len(word)):
                        # For each prefix, it adds the count (from `countWord`) 
                        # of how many times that prefix has appeared
                        score += countWord[word[ : i + 1]]
                  # appends the score to the `answer`
                  answer.append(score)

            # return array of the prefix scores for each word
            return answer


#!------------------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n * l) 👉🏻  n = len(words) l = avg len(each word)

#? 🧺 Space complexity ➺ O(n * l) 

class PrefixNode:
      def __init__(self):
            # Each node has a list named `children` of fixed size 26
            # representing the 26 lowercase English letters
            self.children = [None] * 26
            # `count` track of how many words pass through this node
            self.count = 0

# Prefix Tree or Trie data structure
class PrefixTree:
      def __init__(self):
            # `root`, initialized to an instance of `PrefixNode
            self.root = PrefixNode()

      # `insert` method is used to add a word to the Trie
      def insert(self, word):
            # extract the root as cur to access the trie structure
            cur = self.root
            # For each character in the word
            for ch in word:
                  # get the index  ASCII value of (ch - 'a')
                  i = ord(ch) - ord('a')
                  # if there is already a child node at that position
                  if not cur.children[i]:
                        # creates one if not
                        cur.children[i] = PrefixNode()
                  # then moves to child node
                  cur = cur.children[i]
                  # increments the `count`
                  cur.count += 1

      # `get_score` method calculates the score for a given word
      #  traversing the Trie according to the characters of the word
      def get_score(self, word):
            # extract the root as cur to access the trie structure
            cur = self.root
            # `score` variable for calculating the score of cur word
            score = 0
            # For each character in the word
            for ch in word:
                  # get the index  ASCII value of (ch - 'a')
                  i = ord(ch) - ord('a')
                  # moves to child node
                  cur = cur.children[i]
                  # increment the score by adding current char of word
                  score += cur.count
            return score

class Solution:
      def sumPrefixScores(self, words: List[str]) -> List[int]:
            answer = []

            # create an instance of `PrefixTree
            prefix_tree = PrefixTree()

            # for each word in the input list `words`
            for word in words:
                  #  inserts the word into the Prefix Tree using the `insert` method
                  prefix_tree.insert(word)

            # for each word in the input list `words`
            for word in words:
                  # calculates the score for each word by calling the `get_score` method
                  # appends the results to the `answer` list
                  answer.append(prefix_tree.get_score(word))

            #returns the `answer` list, which  contains the prefix scores for each input word
            return answer