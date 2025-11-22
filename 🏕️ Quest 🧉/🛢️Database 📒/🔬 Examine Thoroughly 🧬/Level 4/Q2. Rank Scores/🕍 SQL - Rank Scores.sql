-- Select the score from the Scores table alias s1
SELECT
      s1.score,
      -- Calculate the rank as 1 plus the count of distinct scores greater than the current score
      (SELECT COUNT(DISTINCT s2.score)
      FROM Scores s2
      WHERE s2.score > s1.score) + 1
AS `rank`
FROM Scores s1
-- Order results by score in descending order (highest score first)
ORDER BY s1.score DESC;
