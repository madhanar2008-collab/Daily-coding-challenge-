CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
set n=n-1;
  RETURN (
      # Write your MySQL query statement below.
        select distinct salary as getNthHighestSalary
        from employee
        order by salary desc
        limit 1 offset N
  );
END