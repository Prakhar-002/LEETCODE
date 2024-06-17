bool lemonadeChange(int* bills, int billsSize) {
      int five = 0;
      int ten = 0;

      for(int i = 0; i < billsSize; i++){
            // if we get 5$ 
            if (bills[i] == 5) {
                  five++;
            } else if (bills[i] == 10) { // If we get 10$ 
                  if (five >= 1) { // we have to return 5$ so we should have it first
                        five--;
                        ten++;
                  } else {
                        return false;
                  }
            } else { // If we get 20$ 
                  if (five >= 1 && ten >= 1) { // We have to return 15$ so 1 -- 10$ and 1 -- 5$
                        ten--;
                        five--;
                  } else if (five >= 3) { // OR we can return 3-- 5% 
                        five -= 3;
                  } else {
                        return false;
                  }
            }
      }

      return true;
}