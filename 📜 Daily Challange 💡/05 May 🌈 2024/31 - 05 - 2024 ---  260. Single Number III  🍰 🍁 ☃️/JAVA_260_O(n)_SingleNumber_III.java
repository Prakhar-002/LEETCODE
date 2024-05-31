class Solution {
      public int[] singleNumber(int[] nums) { // [1,2,1,3,2,5]
            int xor = 0;

            for(int n : nums){
                  xor ^= n; // Taking XOR for all arr number 
            }//even will cancel our and odd will remain

            //  we'll get 3 ^ 5 
            //    00101
            //    00011

            // -> 00110 whenever one is comes we'll get one thing 
            // that one of them are the bit equal to one

            int diffBit = 1; // to get where is that bit which is equal to 1

            while ((diffBit & xor) == 0) { // if we get 0 we'll keep traverse
                  diffBit = diffBit << 1; //  we left shit our bit by one
            }

            int a = 0, b = 0; // make a group where diffBit is 1 and where diffBit is not 1 means 0

            for (int n : nums) {
                  if ((diffBit & n) == 0) { // that group where diffBit is 0
                        a ^= n;
                  } else {
                        b ^= n; // that bit where diffBit is 1
                  }
            }

            // because X1 ^ X1 = 0 hence every bit that comes twice in one group will cancel out

            return new int[]{a, b};
      }
}
