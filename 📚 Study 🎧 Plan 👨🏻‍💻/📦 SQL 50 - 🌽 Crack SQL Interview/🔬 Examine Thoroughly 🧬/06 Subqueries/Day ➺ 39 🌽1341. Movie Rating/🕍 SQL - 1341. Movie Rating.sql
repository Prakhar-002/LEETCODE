--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1341 

(
      SELECT u.name AS results  -- Selects the name from Users table and renames it as 'results'
      FROM Users u  -- From the Users table (alias 'u')
      LEFT JOIN MovieRating mr  -- Left join with the MovieRating table (alias 'mr')
      ON u.user_id = mr.user_id  -- Join condition: matches user_id from Users with user_id from MovieRating
      GROUP BY u.user_id  -- Groups the results by user_id
      ORDER BY COUNT(mr.user_id) DESC, u.name  -- Orders the results first by the count of user_id in MovieRating in descending order, then by user name
      LIMIT 1  -- Limits the result to the top user with the highest count of ratings
)

UNION ALL  -- Combines the results of the two queries, including duplicates

(
      SELECT m.title AS results  -- Selects the movie title from Movies table and renames it as 'results'
      FROM Movies m  -- From the Movies table (alias 'm')
      LEFT JOIN MovieRating mr  -- Left join with the MovieRating table (alias 'mr')
      ON m.movie_id = mr.movie_id  -- Join condition: matches movie_id from Movies with movie_id from MovieRating
      WHERE EXTRACT(year_month FROM created_at) = 202002  -- Filters for MovieRating records created in February 2020
      GROUP BY m.movie_id  -- Groups the results by movie_id
      ORDER BY AVG(mr.rating) DESC, m.title  -- Orders the results first by the average rating in descending order, then by movie title
      LIMIT 1  -- Limits the result to the top movie with the highest average rating
)
