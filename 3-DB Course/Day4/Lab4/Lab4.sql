--1 Display (Using Union Function)
--a The name and the gender of the dependence that's gender is Female and depending on Female Employee.
--b And the male dependence that depends on Male Employee.

select Dependent_name,d.Sex,e.Sex Emp_gender
from Dependent d,Employee e
where e.SSN = d.ESSN and d.Sex = 'F' 
union 
select Dependent_name,d.Sex,e.Sex Emp_gender
from Dependent d,Employee e
where e.SSN = d.ESSN and d.Sex = 'M'

------------------------------------------------------------------------------

--2.	For each project, list the project name and the total hours per week (for all 
--      employees) spent on that project.

select Pname,sum(w.Hours) Hours from Project p, Works_for w
where w.Pno = p.Pnumber
group by p.Pname

----------------------------------------------------------------------------------

--3.	Display the data of the department which has the smallest employee ID over all employees' ID.

select * from Departments d,Employee e
where d.Dnum = e.Dno 
and e.SSN = 
(select min(e.ssn) MinSSN from Departments d,Employee e
where d.Dnum = e.Dno and e.SSN = (select min(Employee.SSN) from Employee)
group by Dname)

----------------------------------------------

--4.	For each department, retrieve the department name and the maximum, minimum and average salary of its employees.

select Dname,min(e.Salary) min_s, max(e.Salary) max_s, avg(e.Salary) avg_s from Departments d,Employee e
where d.Dnum = e.Dno
group by Dname

---------------------------------------------------

--5.	List the last name of all managers who have no dependents.

select distinct e.Lname from Departments dm,Employee e
where e.SSN = dm.MGRSSN and e.SSN not in (select d.ESSN from Employee e,Dependent d where e.SSN = d.ESSN)

--------------------------------------------------

--6.	For each department-- if its average salary is less than the average salary of all employees-- display its number, name and number of its employees.

select d.Dname,count(e.SSN) count_dep from Departments d , Employee e
where d.Dnum = e.Dno and e.Salary is not null
group by e.Dno,d.Dname
having avg(e.Salary) < (select avg(e.Salary) from Employee e)

------------------------------------------------------------

--7.	Retrieve a list of employees and the projects they are working on ordered by department and within each department, ordered alphabetically by last name, first name.

select e.Fname+' '+e.Lname [FULLNAME],p.Pname,d.Dname  from 
Employee e inner join 
Works_for w on w.ESSn = e.SSN
inner join 
Project p on w.Pno = p.Pnumber
inner join
Departments d on e.Dno = d.Dnum
group by d.Dname,e.Fname,e.Lname,p.Pname
order by d.Dname,e.Lname,e.Fname

------------------------------------------------------------------

--8.	Try to get the max 2 salaries using subquery

select max (e.salary) from Employee e
union
select max (e.salary) from Employee e where salary < (select max (e.salary) from Employee e)
order by 1 desc

---------------------------------------------------------------------

--9.	Get the full name of employees that is similar to any dependent name

select e.Fname+' '+e.Lname [Emp_FullName],d.Dependent_name from Employee e,Dependent d
where d.Dependent_name like '%' + e.Fname+' '+e.Lname + '%'

----------------------------------------------------------------------

--10.	Try to update all salaries of employees who work in Project ‘Al Rabwah’ by 30% 

update Employee set Salary =  Salary * 0.30 + Salary from Employee e, Project p
where p.Pname = 'Al Rabwah'

----------------------------------------------------------------------

--11.	Display the employee number and name if at least one of them have dependents (use exists keyword) self-study.

select e.SSN,e.Fname from Employee e
where exists (select e.SSN from Employee e,Dependent d where d.ESSN = e.SSN)


---------------------------------------------------------------------------

--1.	In the department table insert new department called "DEPT IT" , with id 100, employee with SSN = 112233 as a manager for this department. The start date for this manager is '1-11-2006'

insert into Departments (Dname,Dnum,[MGRStart Date])
                 values ('DEPT IT',100,'1-11-2006')
update Departments set MGRSSN = 112233 where Dnum = 100

----------------------------------------------------------------

--2.	Do what is required if you know that : Mrs.Noha Mohamed(SSN=968574)  moved to be the manager of the new department (id = 100), and they give you(your SSN =102672) her position (Dept. 20 manager) 
--a.	First try to update her record in the department table
--b.	Update your record to be department 20 manager.
--c.	Update the data of employee number=102660 to be in your teamwork (he will be supervised by you) (your SSN =102672)

update Departments set MGRSSN = 968574 where Dnum = 100
update Departments set MGRSSN = 102672 where Dnum = 20
update Employee set Dno = 20 where SSN = 102672 

-----------------------------------------------------------------

--3.	Unfortunately the company ended the contract with Mr. Kamel Mohamed (SSN=223344) so try to delete his data from your database in case you know that you will be temporarily in his position.
--      Hint: (Check if Mr. Kamel has dependents, works as a department manager, supervises any employees or works in any projects and handle these cases).


update Works_for set ESSn = 102672 where ESSn = 223344
update Departments set MGRSSN = 102672 where MGRSSN = 223344
update Employee set Superssn = 102672 where Superssn = 223344
delete Employee where SSN = 223344

------------------------------------------------------------------------

select * from Project
select * from Works_for
select * from Employee
select * from Departments
select * from Dependent