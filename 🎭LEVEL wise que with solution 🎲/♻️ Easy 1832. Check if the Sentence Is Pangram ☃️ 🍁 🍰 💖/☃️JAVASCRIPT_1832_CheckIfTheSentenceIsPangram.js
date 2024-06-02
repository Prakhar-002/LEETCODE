var checkIfPangram = function(sentence) {
      if (sentence.length < 26) {
            return false;
      }

      let ch = 'a'.charCodeAt(0);

      while (ch < 'z'.charCodeAt(0) + 1){
            if (!sentence.includes(String.fromCharCode(ch))) {
                  return false;
            }

            ch++;
      }

      return true;
};