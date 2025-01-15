--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1341

(
SELECT u.name AS results
FROM Users u 
LEFT JOIN MovieRating mr 
ON u.user_id = mr.user_id
GROUP BY u.user_id
ORDER BY COUNT(mr.user_id) DESC , u.name 
LIMIT 1
)

UNION ALL

(
SELECT m.title AS results
FROM Movies m 
LEFT JOIN MovieRating mr 
ON m.movie_id = mr.movie_id
WHERE EXTRACT(year_month FROM created_at) = 202002 
GROUP BY m.movie_id
ORDER BY AVG(mr.rating) DESC , m.title 
LIMIT 1
)
