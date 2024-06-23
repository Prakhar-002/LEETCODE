! https://github.com/Prakhar-002/LEETCODE

int heightChecker(int *heights, int heightsSize){
      int heightFreq[101] = {0};

      for (int i = 0; i < heightsSize; i++){
            heightFreq[heights[i]]++;
      }

      int expected[heightsSize];

      int k = 0;

      for (int height = 0; height < 101; height++){
            int children = heightFreq[height];
            
            while (children-- > 0){
                  expected[k++] = height;
            }
      }

      int count = 0; 

      for (int i = 0; i < heightsSize; i++){      
            if (heights[i] != expected[i]){
                  count++;
            }
      }

      return count;
}