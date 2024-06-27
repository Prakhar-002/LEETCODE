//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 3110 

int scoreOfString(char *s){
      int res = 0;

      for (int i = 0; i < strlen(s) - 1; i++){
            res += abs(s[i] - s[i + 1]);
      }
      return res; 
} 