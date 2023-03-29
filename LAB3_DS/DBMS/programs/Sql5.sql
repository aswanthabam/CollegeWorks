CREATE TABLE
    department (
        dno INT PRIMARY KEY,
        ename VARCHAR(255) NOT NULL,
        salary INT NOT NULL,
        Designation VARCHAR(255) NOT NULL,
        dname VARCHAR(255) NOT NULL,
        place VARCHAR(255) NOT NULL
    );

INSERT INTO
    department (
        dno,
        ename,
        salary,
        Designation,
        dname,
        place
    )
VALUES (
        1,
        'Adam',
        8000,
        'Manager',
        'Sales',
        'Mumbai'
    ), (
        2,
        'Jane',
        4000,
        'Clerk',
        'Marketing',
        'Delhi'
    ), (
        3,
        'David',
        7000,
        'Manager',
        'HR',
        'Bangalore'
    ), (
        4,
        'Sarah',
        4500,
        'Clerk',
        'IT',
        'Chennai'
    ), (
        5,
        'Tom',
        6000,
        'Manager',
        'Accountant',
        'Hyderabad'
    );

SELECT * FROM department;

SELECT ename, LENGTH(ename) AS NameLength FROM department;

SELECT ename, UPPER(ename) AS UppercaseName FROM department;

SELECT
    dno AS EmployeeNumber,
    ename AS EmployeeName
FROM department
WHERE salary > (
        SELECT AVG(salary)
        FROM department
    )
ORDER BY salary DESC;

SELECT * FROM department WHERE salary BETWEEN 5000 AND 10000;

SELECT
    ename,
    salary,
    Designation
FROM department
WHERE
    salary > 5000
    OR Designation = 'Clerk';

SELECT ename, Designation
FROM department
WHERE
    Designation NOT IN ('Clerk', 'Manager');

SELECT ename FROM department WHERE ename LIKE “__a%”;