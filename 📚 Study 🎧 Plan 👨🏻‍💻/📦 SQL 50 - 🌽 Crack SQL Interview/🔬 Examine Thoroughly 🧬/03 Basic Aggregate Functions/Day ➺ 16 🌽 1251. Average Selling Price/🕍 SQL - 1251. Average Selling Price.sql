--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1251 

SELECT p.product_id ,
      IFNULL(ROUND(SUM(p.price * u.units) / SUM(u.units) ,2), 0) AS average_price
FROM Prices p
      LEFT JOIN UnitsSold u
      ON p.product_id = u.product_id
            AND u.purchase_date BETWEEN p.start_date and p.end_date
GROUP BY p.product_id
