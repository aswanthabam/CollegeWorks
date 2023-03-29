CREATE TABLE
    students (
        sno INT PRIMARY KEY,
        sname VARCHAR(30) NOT NULL,
        sex CHAR NOT NULL,
        mark INT NOT NULL
    );

INSERT INTO
    students(sno, sname, sex, mark)
VALUES (1, "Adam", "M", 100), (2, "David", "M", 80), (3, "Emily", "F", 50), (4, "Michael", "M", 70), (5, "Sarah", "F", 100);

SELECT * FROM students;

ALTER TABLE students ADD COLUMN srank INTEGER;

SELECT * FROM students;

SELECT sname FROM students WHERE sex="F";

SELECT AVG(mark) as Average FROM students;

SELECT sno, sname
from students
WHERE mark >= (
        SELECT AVG(mark)
        from students
    )
ORDER BY mark DESC;