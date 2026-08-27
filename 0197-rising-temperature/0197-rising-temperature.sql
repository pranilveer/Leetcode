# Write your MySQL query statement below
SELECT a.id FROM Weather a, weather b 
WHERE a.temperature >b.temperature 
AND (TO_DAYS(a.recordDate)-TO_DAYS(b.recordDate))=1