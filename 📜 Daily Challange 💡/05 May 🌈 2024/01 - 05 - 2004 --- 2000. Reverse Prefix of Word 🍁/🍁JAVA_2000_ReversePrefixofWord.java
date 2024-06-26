//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 2000 

class Solution {
    public String reversePrefix(String word, char ch) {
        int index = word.indexOf(ch);
        if (index == -1)
            return word;
        String str = "";
        for (int i = index; i >= 0; i--) {
            str = str + word.charAt(i);
        } 

        return str + word.substring(index + 1, word.length());
    }
}