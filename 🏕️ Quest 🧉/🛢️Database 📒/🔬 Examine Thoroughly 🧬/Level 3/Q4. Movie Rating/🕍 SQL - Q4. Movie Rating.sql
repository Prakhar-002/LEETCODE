(
-- Select the user name from Users table
SELECT u.name AS results
FROM Users u
-- Left join with MovieRating to get ratings by users
LEFT JOIN MovieRating mr ON u.user_id = mr.user_id
-- Group by user to aggregate ratings count
GROUP BY u.user_id
-- Order users by the number of ratings they have given (descending) and then by name
ORDER BY COUNT(mr.user_id) DESC, u.name
-- Limit to the top user who gave the most ratings
LIMIT 1
)

UNION ALL

(
-- Select movie title from Movies table
SELECT m.title AS results
FROM Movies m
-- Left join to get movie ratings
LEFT JOIN MovieRating mr ON m.movie_id = mr.movie_id
-- Filter ratings created in February 2020
WHERE EXTRACT(year_month FROM created_at) = 202002
-- Group by movie to calculate average rating
GROUP BY m.movie_id
-- Order movies by highest average rating and then by title
ORDER BY AVG(mr.rating) DESC, m.title
-- Limit to the top rated movie in Feb 2020
LIMIT 1
)
