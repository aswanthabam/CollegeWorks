CREATE TABLE
    Customer (
        cid INT PRIMARY KEY,
        cname VARCHAR(50),
        date_of_birth DATE,
        place VARCHAR(50)
    );

INSERT INTO Customer
VALUES (
        1,
        'Adam',
        '1990-05-12',
        'New York'
    ), (
        2,
        'Sarah',
        '1985-03-20',
        'Los Angeles'
    ), (
        3,
        'Alice',
        '1993-10-11',
        'Kannur'
    ), (
        4,
        'Johnson',
        '1968-11-13',
        'Houston'
    ), (
        5,
        'David',
        '1998-07-30',
        'Miami'
    );

SELECT * FROM Customer;

CREATE TABLE
    loan (
        loanno INT PRIMARY KEY,
        cid INT,
        brnme VARCHAR(50),
        amount DECIMAL(10, 2),
        FOREIGN KEY (cid) REFERENCES Customer(cid)
    );

INSERT INTO loan
VALUES (1, 1, 'Bank of America', 5000), (2, 2, 'Canara', 10000), (3, 3, 'SBI', 7500), (8, 4, 'HSBC', 12000), (10, 5, 'Citybank', 8000);

SELECT * FROM loan;

CREATE TABLE
    depositor (
        accno INT PRIMARY KEY,
        cid INT,
        balance DECIMAL(10, 2),
        bname VARCHAR(50),
        FOREIGN KEY (cid) REFERENCES Customer(cid)
    );

INSERT INTO depositor
VALUES (
        1001,
        1,
        5000,
        'Bank of America'
    ), (1002, 2, 8000, 'Canara'), (1003, 3, 6000, 'SBI'), (1004, 4, 10000, 'HSBC'), (1005, 5, 7000, 'Citybank');

SELECT * FROM depositor;

ALTER TABLE loan ADD amount DECIMAL(10,2);

UPDATE loan SET amount = 15000 WHERE loanno = 1;

UPDATE loan SET amount = 20000 WHERE loanno = 2;

UPDATE loan SET amount = 10000 WHERE loanno = 3;

UPDATE loan SET amount = 15000 WHERE loanno = 4;

UPDATE loan SET amount = 12000 WHERE loanno = 5;

SELECT cname FROM Customer WHERE cid = 2;

SELECT
    c.cname,
    l.amount + 150 AS new_amount
FROM Customer c
    INNER JOIN loan l ON c.cid = l.cid;

SELECT
    l.loanno,
    c.cname,
    c.place
FROM Customer c
    INNER JOIN loan l ON c.cid = l.cid
WHERE c.place = 'Kannur';

SELECT * FROM loan WHERE loanno IN (2, 8, 10);

SELECT c.cname
FROM Customer c
    INNER JOIN loan l ON c.cid = l.cid
    INNER JOIN depositor d ON c.cid = d.cid;