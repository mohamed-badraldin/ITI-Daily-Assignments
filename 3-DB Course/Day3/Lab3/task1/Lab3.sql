
--1. Display the Department id, name and id and the name of its manager.

select Dnum ID, Dname, SSN MANGER_ID, Fname+''+Lname [MANGER_NAME] from Departments, Employee
where Employee.SSN = Departments.MGRSSN


--2. Display the name of the departments and the name of the projects under its control.

select Dname, Pname from Project,Departments
where Departments.Dnum = Project.Dnum

--3. Display the full data about all the dependence associated with the name of the employee they depend on him/her.

select d.*, Fname+''+Lname [FULLNAME] 
from Employee e  inner join Dependent d 
on d.ESSN = e.SSN

--4. Display the Id, name and location of the projects in Cairo or Alex city.

select  Pnumber,Pname,Plocation from Project
where City in('Cairo','Alex')

--5. Display the Projects full data of the projects with a name starts with "a" letter

select * from Project where Pname like 'a%'

--6. display all the employees in department 30 whose salary from 1000 to 2000 LE monthly

select * from Employee where Dno = 30 and Salary between 1000 and 2000


--7. Retrieve the names of all employees in department 10 who works more than or equal10 hours per week on "AL Rabwah" project.

select fname from Employee inner join Works_for
 on
 Works_for.ESSn = Employee.SSN
and dno = 10 
and Hours >= 10
inner join project on Works_for.pno = project.Pnumber
and Pname = 'Al Rabwah'

select e.Fname,s.Fname from  Employee e, Employee s
where e.SSN = s.Superssn
and s.Superssn = 223344


--9. Retrieve the names of all employees and the names of the projects they are working on, sorted by the project name.

select Fname,Pname from Employee,Project
order by Pname

--11. Display All Data of the mangers

select * from Employee,Departments
where Employee.SSN = Departments.MGRSSN

--12. Display All Employees data and the data of their dependents even if they have no dependents

select * from Employee left outer join Dependent on Dependent.ESSN = Employee.SSN

--1. Insert your personal data to the employee table as a new employee in department number 30, SSN = 102672, Superssn = 112233, salary=3000.

insert Employee (Fname,Lname,SSN,Sex,Salary,Superssn,Dno)
values ('badr','aldin',102672,'M',3000,112233,30)

--2. Insert another employee with personal data your friend as new employee in department number 30, SSN = 102660, but don’t enter any value for salary or manager number to him.
insert Employee (Fname,Lname,SSN,Sex,Dno)
values ('ahmed','mohamed',102660,'M',30)

--3. Upgrade your salary by 20 % of its last value.
update Employee set Salary = Salary + Salary * 0.2 where SSN  = 102672
