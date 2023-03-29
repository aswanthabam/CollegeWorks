CREATE TABLE
    department (
        ename varchar(30) not null,
        salary int not NULL,
        dno int NOT NULL,
        dname VARCHAR(30) not NULL,
        place VARCHAR(30) NOT NULL
    );

INSERT INTO department
VALUES (
        "Adam",
        20000,
        100,
        "Computer Science",
        "Kasargod"
    ), (
        "David",
        10000,
        100,
        "Computer Science",
        "Kannur"
    ), (
        "Michael",
        5000,
        102,
        "History",
        "Irrity"
    ), (
        "Sarah",
        8000,
        102,
        "History",
        "Panoor"
    ), (
        "Emily",
        7000,
        103,
        "Commerce",
        "Kerala"
    );

SELECT * FROM department;

ALTER TABLE department RENAME COLUMN place TO city;

SELECT * FROM department;

SELECT ename FROM department WHERE salary > 6000 AND salary < 10000;

SELECT SUM(salary) FROM department;

SELECT ename FROM department WHERE salary > 5000 AND salary < 10000;

CREATE VIEW STAR AS 
	SELECT ename,salary,city FROM department 
; 

SELECT * FROM STAR;

SELECT ename,ROUND(salary,10) AS Round FROM department;