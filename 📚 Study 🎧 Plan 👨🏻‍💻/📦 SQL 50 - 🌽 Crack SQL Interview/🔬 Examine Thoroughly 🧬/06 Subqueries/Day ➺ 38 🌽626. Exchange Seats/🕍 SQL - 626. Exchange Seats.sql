--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 626

SELECT  
CASE 
      WHEN id = (SELECT MAX(id) FROM Seat) AND id % 2 = 1 THEN id
      WHEN id % 2 = 1 THEN id + 1 else id - 1 END AS id,
student 
FROM Seat
ORDER BY id 