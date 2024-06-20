# ✏️ Easy 💯 beats || Detailed Explanation 🫀 || formatted ✍🏻 || JAVA🍁|| C++🎲 || JS ☃️|| PY🍰|| GIT


<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/solutions/5305555/easy-beats-detailed-explanation-formatted-java-c-js-py-git"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>




# 🎉 Screenshot 📸

![2037.png](https://assets.leetcode.com/users/images/4ce51ee6-50ae-4534-a795-f1cc74441eb5_1718257043.7289815.png)


## Input 📥 

    Two Number Array (seats) && (students)

    Seats[i] & Students[i] represent the position of Seats & Students


## Output 📤

    We have to count number of moves to place Student On Seat

# Intuition 🤔💭

    I did't understand the problem first so just understand this first

    - We are giving TWO array And both are telling that 

    - Seats array tells us where the seat is place 
     
           --> (Seats position) 

    - Student array tells us where the student is standing 
     
           --> (Student position)


---
 
    Now we have to calculate that what minimum number of moves 

    A Student take to sit it's nearest possible seat 

    Because student can move one step forword or backward

# Example 📜

    `Ex.`

        Seats:  [3,1,5]  so seats are at  1 _ 3 _ 5

        Student: [2,7,4] and student  _ 2 _ 4 _ _ _ 7

        So If we need to place stu on minimum possible seat it will be

        Student at _ will take _ seat 

                   2   ->  1  moves will => 2 - 1 = 1  

                   4   ->  3  moves will =>  4 - 3 = 1

                   7   ->  5  moves will =>  7 - 5 = 2 

            Total will be 4




# Approach ✍🏼

        There will be 2 steps 

    Step 1 -> First we'll sort both array   

            seats.sort() & students.sort() 

            To find minimum possible positiion for every sturdent   

    Step 2 -> Make Apply for loop upto seats.length & make moves = 0 

            we will count for every moves 

            one student took to sit on his seat

            Take abs diff of every Ith value simple 😉



# Complexity 🏗️
- ⌚ Time complexity: $$O(nlogn)$$ `For sorting both array`
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- 🧺 Space complexity: $$O(1)$$ 
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code 👨🏻‍💻


JAVA
``` JAVA []
class Solution {
    public int minMovesToSeat(int[] seats, int[] students) {
        Arrays.sort(seats);
        Arrays.sort(students);

        int moves = 0;

        for (int i = 0; i < students.length; i++) {
            moves += Math.abs(students[i] - seats[i]);
        }

        return moves;
    }
}
```
C++
```C++ []
class Solution {
    public int minMovesToSeat(int[] seats, int[] students) {
        Arrays.sort(seats);
        Arrays.sort(students);

        int moves = 0;

        for (int i = 0; i < students.length; i++) {
            moves += Math.abs(students[i] - seats[i]);
        }

        return moves;
    }
}
```
JAVASCRIPT
``` JAVASCRIPT []
var minMovesToSeat = function (seats, students) {
    seats.sort((a, b) => a - b)
    students.sort((a, b) => a - b)

    let moves = 0

    for (let i = 0; i < seats.length; i++) {
        moves += Math.abs(students[i] - seats[i]);
    }

    return moves;
};
```
PYTHON
```PYTHON []
class Solution:
    def minMovesToSeat(self, seats: List[int], 
                             students: List[int]) -> int:
        seats.sort()
        students.sort()

        moves = 0

        for i in range(len(seats)):
            moves += abs(seats[i] - students[i])

        return moves

```

