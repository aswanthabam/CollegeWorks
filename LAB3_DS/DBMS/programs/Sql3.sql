CREATE TABLE
    department (
        dno INT PRIMARY KEY,
        dname VARCHAR(255) NOT NULL,
        dmanager VARCHAR(255) NOT NULL,
        place VARCHAR(255) NOT NULL
    );

INSERT INTO
    department (dno, dname, dmanager, place)
VALUES (1, 'Sales', 'Adam', 'Mumbai'), (
        2,
        'Marketing',
        'Sarah',
        'Delhi'
    ), (3, 'Head', 'David', 'Bangalore'), (
        4,
        'Accountant',
        'Alice',
        'Chennai'
    ), (
        5,
        'Executive',
        'Tom',
        'Hyderabad'
    );

SELECT * FROM department;

CREATE TABLE
    emp (
        eno INT PRIMARY KEY,
        ename VARCHAR(255) NOT NULL,
        job VARCHAR(255) NOT NULL,
        dno INT,
        salary INT NOT NULL,
        FOREIGN KEY (dno) REFERENCES department(dno)
    );

INSERT INTO
    emp (eno, ename, job, dno, salary)
VALUES (10, 'Adam', 'Manager', 1, 8000), (20, 'Sarah', 'Manager', 2, 9000), (30, 'David', 'Manager', 3, 7000), (40, 'Alice', 'Manager', 4, 8500), (50, 'Tom', 'Manager', 5, 4000);

SELECT * FROM emp;

-- Question 1

SELECT ename, salary FROM emp ORDER BY salary ASC;

-- Question 2

SELECT ename, salary FROM emp WHERE eno = 20;

-- Question 3

SELECT dmanager FROM department WHERE dname = 'Accountant';

-- Question 4

SELECT
    emp.ename AS Name,
    emp.salary AS Salary,
    department.dmanager AS Manager
FROM emp
    INNER JOIN department ON emp.dno = department.dno
WHERE emp.salary > 5000;

-- Question 5

SELECT
    department.dname AS DepartmentName,
    SUM(emp.salary) AS TotalSalary
FROM emp
    INNER JOIN department ON emp.dno = department.dno
GROUP BY department.dname;

-- Question 6

SELECT
    department.dname AS DepartmentName,
    AVG(emp.salary) AS AverageSalary
FROM emp
    INNER JOIN department ON emp.dno = department.dno
GROUP BY department.dname;

SELECT
    department.dname AS DepartmentName,
    COUNT(*) AS NumberOfEmployees
FROM emp
    INNER JOIN department ON emp.dno = department.dno
GROUP BY department.dname;

SELECT MAX(salary) AS MaximumSalary FROM emp;

SELECT MIN(salary) AS MinimumSalary FROM emp;

SELECT SUM(salary) AS TotalSalary FROM emp;