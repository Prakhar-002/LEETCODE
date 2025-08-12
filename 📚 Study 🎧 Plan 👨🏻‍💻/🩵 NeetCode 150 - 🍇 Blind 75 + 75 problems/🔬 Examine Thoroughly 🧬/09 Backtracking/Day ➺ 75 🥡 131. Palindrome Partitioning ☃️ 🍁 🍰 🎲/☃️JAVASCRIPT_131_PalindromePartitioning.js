//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 131 


var isPali = function (str, l, r) {
      while (l < r) {
            if (str.charAt(l++) != str.charAt(r--)) {
                  return false;
            }
      }
      return true;
}

var subString = function (str, i, part, result) {
      if (i >= str.length) {
            result.push([...part])
            return
      }

      for (let j = i; j < str.length; j++) {
            if (isPali(str, i, j)) {
                  part.push(str.slice(i, j + 1));
                  subString(str, j + 1, part, result);
                  part.pop()
            }

      }
}

var partition = function (s) {
      result = []
      part = []

      //? do This or leave it
      // var subString = function (i) {
      //       if (i >= s.length) {
      //             result.push([...part])
      //             return
      //       }

      //       for (let j = i; j < s.length; j++) {
      //             if (isPali(s, i, j)) {
      //                   part.push(s.slice(i, j + 1));
      //                   subString(j + 1);
      //                   part.pop();
      //             }

      //       }
      // }

      subString(s, 0, part, result)
      return result
};