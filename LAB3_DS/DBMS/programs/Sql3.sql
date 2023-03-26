CREATE TABLE department (
  dno INT PRIMARY KEY,
  dname VARCHAR(255) NOT NULL,
  dmanager VARCHAR(255) NOT NULL,
  place VARCHAR(255) NOT NULL);

INSERT INTO department (dno, dname, dmanager, place) VALUES
  (1, 'Sales', 'John', 'Mumbai'),
  (2, 'Marketing', 'Jane', 'Delhi'),
  (3, 'HR', 'Bob', 'Bangalore'),
  (4, 'Finance', 'Alice', 'Chennai'),
  (5, 'IT', 'Tom', 'Hyderabad');

SELECT * FROM department;

CREATE TABLE emp (
  eno INT PRIMARY KEY,
  ename VARCHAR(255) NOT NULL,
  job VARCHAR(255) NOT NULL,
  dno INT,
  salary INT NOT NULL,
  FOREIGN KEY (dno) REFERENCES department(dno));

INSERT INTO emp (eno, ename, job, dno, salary) VALUES
  (1, 'John', 'Manager', 1, 8000),
  (2, 'Jane', 'Manager', 2, 9000),
  (3, 'Bob', 'Manager', 3, 7000),
  (4, 'Alice', 'Manager', 4, 8500),
  (5, 'Tom', 'Manager', 5, 6000);

SELECT * FROM Emp;

SELECT ename, salary FROM emp ORDER BY salary ASC;

SELECT ename, salary FROM emp WHERE eno = 20;

SELECT dmanager FROM department WHERE dname = 'Finance';

SELECT emp.ename AS Name, emp.salary AS Salary, 	department.dmanager AS Manager
	FROM emp
	INNER JOIN department ON emp.dno = department.dno
	WHERE emp.salary > 5000;

SELECT department.dname AS DepartmentName, SUM(emp.salary) AS 	TotalSalary
	FROM emp
	INNER JOIN department ON emp.dno = department.dno
	GROUP BY department.dname;

	SELECT department.dname AS DepartmentName, AVG(emp.salary) AS 	AverageSalary
	FROM emp
	INNER JOIN department ON emp.dno = department.dno
	GROUP BY department.dname;


	SELECT department.dname AS DepartmentName, COUNT(*) AS 	NumberOfEmployees
	FROM emp
	INNER JOIN department ON emp.dno = department.dno
	GROUP BY department.dname;

SELECT MAX(salary) AS MaximumSalary FROM emp;

SELECT MIN(salary) AS MinimumSalary FROM emp;

	SELECT SUM(salary) AS TotalSalary FROM emp;

