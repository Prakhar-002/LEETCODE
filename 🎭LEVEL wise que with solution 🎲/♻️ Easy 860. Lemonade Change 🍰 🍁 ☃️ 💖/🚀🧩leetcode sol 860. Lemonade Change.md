# 🚀 Explained Greedy Basic Solution || Easy ♻️|| Concise 🎗️|| 4 Langauge

<h2 align="center"> 

<a href="https://leetcode.com/problems/lemonade-change/solutions/5230494/explained-greedy-basic-solution-easy-concise-4-langauge"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>

# Screenshot 🎉

![860.png](https://assets.leetcode.com/users/images/0cffcafc-00cf-4180-867e-474c5abefb6f_1717062779.668169.png)

---

# Intuition 🤔

    Given Imforamtion -->

    We have a array of bills consider as store of cash notes

    
`Bills all Ith pos assign a customer who bring us bills[i] cash`

1. `From each customer` we have to `take exactly 5 doller` 

2. `At start` We don't have any cash in hand `0 Doller in hand`

---

# Approach 🫠

    As we know rather we get customer with 

    5 Doller ->  Take it as it is

    10 Doller  -> return 1 -- 5 Doller bill

    20 Doller -> return 1 -- 5 Doller and 1 -- 10 Doller bill

    20 Doller -> or return 3 -- 5 Doller bills

---

# Understand with code 🥰

       There will be 6 steps 

    Step 1 -> Make variables five and ten

    Step 2 -> Interate whole loop  

    Step 3 -> check Ith customer bill 

            if bill = 5 -> Then add in five

    Step 4 -> If bill = 10  

            Check 5 if >= 1 then dec five by 1 and inc ten by 1

            else return false

    Step 5 -> If bill = 20 

            Check 5 if >= 1 And 10 >= 1 
                then dec five by 1 and ten by 1

            Check 5 elseif >= 3 
                then dec five by 3

            Else return false
    

    Step 6 -> return true
---



# Complexity ☃️
- Time complexity: $$O(n)$$ ♻️
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1)$$ 🚀
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

---

# Code ✨

JAVA
``` JAVA []
class Solution {
    public boolean lemonadeChange(int[] bills) {
            int five = 0;
            int ten = 0;

            for(int bill : bills){
                  // if we get 5$ 
                  if (bill == 5) {
                        five++;
                  } else if (bill == 10) { // If we get 10$ 
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
                        } else if (five >= 3) { // OR we can return 3 -- 5% 
                              five -= 3;
                        } else {
                              return false;
                        }
                  }
            }

            return true;
      }
}
```
JAVASCRIPT
```JAVASCRIPT []
var lemonadeChange = function (bills) {
    let five = 0;
    let ten = 0;

    for (const bill of bills) {
        // if we get 5$ 
        if (bill == 5) {
            five++;
        } else if (bill == 10) { // If we get 10$ 
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
};
```
PYTHON 
```PYTHON []
class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        five = 0
        ten = 0

        for bill in bills:
            # if we get 5$
            if bill == 5:
                five += 1

            elif bill == 10:
                if five >= 1:
                    five -= 1
                    ten += 1

                else:
                    return False

            else:
                if five >= 1 and ten >= 1:
                    five -= 1
                    ten -= 1

                elif five >= 3:
                    five -= 3

                else:
                    return False

        return True

```
C
```c []
bool lemonadeChange(int* bills, int billsSize) {
    int five = 0;
    int ten = 0;

    for (int i = 0; i < billsSize; i++) {
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
            if (five >= 1 &&
                ten >= 1) { // We have to return 15$ so 1 -- 10$ and 1 -- 5$
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
```
