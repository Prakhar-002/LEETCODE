var freqCounter = (str) => {
      let freq = new Array(26).fill(0)

      for (let i = 0; i < str.length; i++) {
            freq[str.charAt(i).charCodeAt(0) - 'a'.charCodeAt(0)]++;
      }

      return freq;
}

var commonChars = function(words) {
      let commonChars = []

      let commonWordFreq = freqCounter(words[0])

      for (let i = 1; i < words.length; i++) {
            let curWordFreq = freqCounter(words[i]);

            for(let j = 0; j < 26; j++){
                  commonWordFreq[j] = Math.min(commonWordFreq[j], curWordFreq[j]);
            }
      }

      for (let i = 0; i < commonWordFreq.length; i++) {
            let k = commonWordFreq[i];
            if (k != 0) {
                  while(k-- > 0){
                        commonChars.push(String.fromCharCode('a'.charCodeAt(0) + i));
                  }
            }
      }

      return commonChars;

};