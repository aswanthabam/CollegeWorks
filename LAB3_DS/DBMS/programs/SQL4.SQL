
CREATE TABLE emp (
  eno INT PRIMARY KEY,
  ename VARCHAR(255) NOT NULL,
  job VARCHAR(255) NOT NULL,
  manager VARCHAR(255) NOT NULL,
  salary INT NOT NULL
);
INSERT INTO emp (eno, ename, job, manager, salary) VALUES
  (1, 'John', 'Manager', 'Jane', 8000),
  (2, 'Jane', 'Manager', 'Bob', 9000),
  (3, 'Bob', 'Manager', 'Alice', 7000),
  (4, 'Alice', 'Manager', 'Tom', 8500),
  (5, 'Tom', 'Manager', 'John', 6000);

SELECT * FROM Emp

SELECT ename, salary FROM emp WHERE salary > (SELECT AVG(salary) 	FROM emp);

ALTER TABLE emp ADD COLUMN new_salary INT;
UPDATE emp SET new_salary = ROUND(salary * 1.2);
ALTER TABLE emp RENAME COLUMN new_salary TO 'New Salary';
SELECT * FROM Emp


SELECT eno, ename FROM emp WHERE salary > (SELECT AVG(salary) FROM emp) ORDER BY salary DESC;

CREATE VIEW emp_view AS SELECT eno, ename AS EMPLOY FROM emp;
SELECT * FROM emp_view;

SELECT eno, ename FROM emp WHERE ename LIKE '%T%';
