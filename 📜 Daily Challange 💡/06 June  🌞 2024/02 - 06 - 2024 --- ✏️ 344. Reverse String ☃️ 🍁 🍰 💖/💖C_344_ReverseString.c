//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 344 

void reverseString(char *s, int sSize){
      int st = 0, end = sSize - 1;
      while (st < end){
            char ch = s[st];
            s[st] = s[end];
            s[end] = ch;
            end--;
            st++;
      }
} 