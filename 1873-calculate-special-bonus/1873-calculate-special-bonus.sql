SELECT employee_id , salary  AS bonus FROM EMPLOYEES WHERE employee_id %2 != 0 AND NAME NOT LIKE 'M%'
UNION
SELECT employee_id , 0 AS bonus FROM EMPLOYEES WHERE employee_id %2 = 0 OR NAME  LIKE 'M%'
ORDER BY employee_id;