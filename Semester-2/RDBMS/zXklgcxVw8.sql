-- phpMyAdmin SQL Dump
-- version 4.8.5
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: May 31, 2021 at 03:44 PM
-- Server version: 8.0.13-4
-- PHP Version: 7.2.24-0ubuntu0.18.04.7

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `zXklgcxVw8`
--

-- --------------------------------------------------------

--
-- Table structure for table `Balance_Details`
--

CREATE TABLE `Balance_Details` (
  `Client_No` varchar(6) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Name` varchar(20) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Balance` decimal(10,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `Balance_Details`
--

INSERT INTO `Balance_Details` (`Client_No`, `Name`, `Balance`) VALUES
('C0001', 'Roshan Joshi', '15000.00'),
('C0002', 'Mamta Muzumdar', '500.00'),
('C0003', 'Chhaya Bankar', '2000.00'),
('C0004', 'Ashwini Rathod', '7000.00'),
('C0005', 'Ivan Bayross', '1500.00'),
('C0006', 'Deepak Sharma', '4300.00'),
('C0007', 'Shymali Bhide', '2100.00');

-- --------------------------------------------------------

--
-- Table structure for table `Client_Master`
--

CREATE TABLE `Client_Master` (
  `cust_id` varchar(5) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Lname` varchar(15) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Fname` varchar(15) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Area` varchar(2) COLLATE utf8_unicode_ci DEFAULT NULL,
  `phone_no` bigint(8) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `Client_Master`
--

INSERT INTO `Client_Master` (`cust_id`, `Lname`, `Fname`, `Area`, `phone_no`) VALUES
('a01', 'Patel', 'Vijay', 'sa', 381334),
('a02', 'Saitwal', 'Vandana', 'mu', 556037),
('a03', 'Jaguste', 'Pramada', 'da', 372631),
('a04', 'Navindgi', 'Basu', 'ba', 666612),
('a06', '', 'Rukmini', 'ga', 512527),
('a05', 'Sreedhran', 'Ravi', 'va', 0);

-- --------------------------------------------------------

--
-- Table structure for table `Customers`
--

CREATE TABLE `Customers` (
  `Client_No` varchar(6) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Name` varchar(20) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Address` varchar(50) COLLATE utf8_unicode_ci DEFAULT NULL,
  `City` varchar(20) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Pincode` bigint(8) DEFAULT NULL,
  `State` varchar(20) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Bal_Due` decimal(10,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `Customers`
--

INSERT INTO `Customers` (`Client_No`, `Name`, `Address`, `City`, `Pincode`, `State`, `Bal_Due`) VALUES
('C0001', 'Roshan Joshi', 'Khapaitya Chakla', 'Surat', 395003, 'Gujarat', '15000.00'),
('C0002', 'Mamta Mazumdar', 'Salt Lake', 'Kolkata', 460012, 'West Bengal', '5000.00'),
('C0003', 'Chhaya Bankar', 'Worli', 'Mumbai', 400054, 'Maharashtra', '2000.00'),
('C0004', 'Ashwini Rathod', 'Ghangaur Ghat', 'Udaipur', 780011, 'Rajasthan', '7000.00'),
('C0005', 'Ivan Bayross', 'Indiranagar', 'Bangalore', 560050, 'karnataka', '1500.00'),
('C0006', 'Deepak Sharma', 'Bandra', 'Mumbai', 400002, 'Maharashtra', '4300.00'),
('C0007', 'Shymali Bhide', 'Juhu', 'Mumbai', 470912, 'Maharashtra', '2100.00');

-- --------------------------------------------------------

--
-- Table structure for table `DEPT`
--

CREATE TABLE `DEPT` (
  `deptno` int(3) DEFAULT NULL,
  `dname` varchar(10) COLLATE utf8_unicode_ci DEFAULT NULL,
  `location` varchar(10) COLLATE utf8_unicode_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `DEPT`
--

INSERT INTO `DEPT` (`deptno`, `dname`, `location`) VALUES
(10, 'Accounting', 'New York'),
(20, 'Research', 'Dallas'),
(30, 'Sales', 'Chicago'),
(40, 'Operations', 'Boston');

-- --------------------------------------------------------

--
-- Table structure for table `EMP`
--

CREATE TABLE `EMP` (
  `Emp_no` int(5) DEFAULT NULL,
  `Ename` varchar(15) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Job` varchar(15) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Mgr` int(5) DEFAULT NULL,
  `hiredate` date DEFAULT NULL,
  `Sal` decimal(8,2) DEFAULT NULL,
  `Comm` int(4) DEFAULT NULL,
  `deptno` int(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `EMP`
--

INSERT INTO `EMP` (`Emp_no`, `Ename`, `Job`, `Mgr`, `hiredate`, `Sal`, `Comm`, `deptno`) VALUES
(7839, 'King', 'President', NULL, '1981-11-17', '5000.00', NULL, 10),
(7698, 'Blake', 'Manager', 7839, '1981-05-01', '2850.00', NULL, 30),
(7782, 'Clerk', 'Manager', 7839, '1981-06-09', '2450.00', NULL, 10),
(7566, 'Jones', 'Manager', 7839, '1981-04-02', '2975.00', NULL, 20),
(7788, 'Scott', 'Analyst', 7566, '1987-07-13', '3000.00', NULL, 20),
(7902, 'Ford', 'Analyst', 7566, '1981-12-03', '3000.00', NULL, 20),
(7369, 'Smith', 'Clerk', 7902, '1980-12-17', '800.00', NULL, 20),
(7499, 'Allen', 'Salesman', 7698, '1981-02-20', '1600.00', 300, 30),
(7521, 'Ward', 'Salesman', 7698, '1981-02-22', '1250.00', 500, 30),
(7654, 'Martin', 'Salesman', 7698, '1981-09-28', '1250.00', 1400, 30),
(7844, 'Turnor', 'Salesman', 7698, '1981-09-08', '1500.00', NULL, 30),
(7876, 'Adams', 'Clerk', 7788, '1987-07-13', '1100.00', NULL, 20),
(7900, 'James', 'Clerk', 7698, '1981-07-13', '950.00', NULL, 20),
(7934, 'Miler', 'Clerk', 7782, '1982-01-23', '1300.00', NULL, 10);

-- --------------------------------------------------------

--
-- Table structure for table `Employee`
--

CREATE TABLE `Employee` (
  `Employee_no` int(3) NOT NULL,
  `First_name` varchar(10) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Last_name` varchar(10) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Salary` decimal(8,0) DEFAULT NULL,
  `Joining_date` date DEFAULT NULL,
  `Department` varchar(10) COLLATE utf8_unicode_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `Employee`
--

INSERT INTO `Employee` (`Employee_no`, `First_name`, `Last_name`, `Salary`, `Joining_date`, `Department`) VALUES
(1, 'John', 'Abraham', '100000', '2013-01-01', 'Banking'),
(2, 'Michael', 'Clarke', '80000', '2013-04-01', 'Insurance'),
(3, 'Roy', 'Thomas', '70000', '2013-05-21', 'Banking'),
(4, 'Tom', 'Jose', '60000', '2013-12-08', 'Insurance'),
(5, 'Jerry', 'Pinto', '65000', '2014-02-11', 'Marketing'),
(6, 'Philip', 'Mathew', '45000', '2014-01-07', 'Services'),
(7, 'John', 'Henry', '55000', '2015-01-01', 'Technical'),
(8, 'Ivan', 'Bayross', '60000', '2015-08-01', 'Sales');

-- --------------------------------------------------------

--
-- Table structure for table `Incentives`
--

CREATE TABLE `Incentives` (
  `Employee_Ref_Id` int(3) DEFAULT NULL,
  `Incentive_date` date DEFAULT NULL,
  `Incentive_amount` decimal(8,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `Incentives`
--

INSERT INTO `Incentives` (`Employee_Ref_Id`, `Incentive_date`, `Incentive_amount`) VALUES
(1, '2013-02-01', '5000.00'),
(2, '2013-12-01', '3000.00'),
(3, '2013-03-01', '4000.00'),
(4, '2015-04-21', '4500.00'),
(5, '2015-09-01', '3500.00');

-- --------------------------------------------------------

--
-- Table structure for table `invoice`
--

CREATE TABLE `invoice` (
  `inv_no` varchar(3) COLLATE utf8_unicode_ci DEFAULT NULL,
  `my_no` int(5) DEFAULT NULL,
  `cust_id` varchar(5) COLLATE utf8_unicode_ci DEFAULT NULL,
  `issue_date` date DEFAULT NULL,
  `return_date` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `invoice`
--

INSERT INTO `invoice` (`inv_no`, `my_no`, `cust_id`, `issue_date`, `return_date`) VALUES
('i01', 4, 'a01', '1996-01-13', '1996-01-25'),
('i02', 3, 'a02', '1996-02-12', '1996-02-15'),
('i03', 1, 'a02', '1996-02-15', '1996-02-18'),
('i04', 6, 'a03', '1996-03-10', '1996-03-13'),
('i05', 7, 'a04', '1996-02-05', '1996-02-08'),
('i06', 2, 'a06', '1996-03-18', '1996-03-21'),
('i07', 9, 'a05', '1996-01-07', '1996-01-10'),
('i08', 9, 'ao1', '1996-02-11', '1996-02-14'),
('i09', 1, 'a05', '1996-02-15', '1996-02-28');

-- --------------------------------------------------------

--
-- Table structure for table `Movie`
--

CREATE TABLE `Movie` (
  `my_no` int(5) DEFAULT NULL,
  `Title` varchar(25) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Type` varchar(10) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Star` varchar(25) COLLATE utf8_unicode_ci DEFAULT NULL,
  `Price` decimal(8,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `Movie`
--

INSERT INTO `Movie` (`my_no`, `Title`, `Type`, `Star`, `Price`) VALUES
(1, 'Bloody Vengeance', 'action', 'Jackie Chan', '180.95'),
(2, 'The Firm', 'Thriller', 'Tom Cruise', '200.00'),
(3, 'Pretty Woman', 'Romantic', 'Richarge Gere', '150.00'),
(4, 'Home Alone', 'Comedy', 'Macaulay Culkin', '150.55'),
(5, 'The Fugitive', 'Thriller', 'Harrison Ford', '200.00'),
(6, 'Coma', 'Suspence', 'Michael Douglas', '100.00'),
(7, 'Dracula', 'Horror', 'Gray Oldman', '150.00'),
(8, 'Quick Charge', 'Comedy', 'Bill Murray', '100.00'),
(9, 'Gone with the Wind', 'Drama', 'Clarke Gable', '200.00'),
(10, 'Carry on Doctor', 'Comedy', 'Leslie Phillips', '100.00');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `Employee`
--
ALTER TABLE `Employee`
  ADD PRIMARY KEY (`Employee_no`);

--
-- Indexes for table `Incentives`
--
ALTER TABLE `Incentives`
  ADD KEY `Employee_Ref_Id` (`Employee_Ref_Id`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `Incentives`
--
ALTER TABLE `Incentives`
  ADD CONSTRAINT `Incentives_ibfk_1` FOREIGN KEY (`Employee_Ref_Id`) REFERENCES `Employee` (`employee_no`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
