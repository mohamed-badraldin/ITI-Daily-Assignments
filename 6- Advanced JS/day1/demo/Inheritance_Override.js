
// function Employee(nm="EmpName", age=20){
//     Employee.count++;
//     this.nm = nm;
//     this.age = age;
//     this.currentNum = Employee.count;
    
//     this.DisplayAge2 = function(){return this.age;}
// }


// Employee.count = 0;
// Employee.getCount = function(){return Employee.count};

// var e1 = new Employee();
// console.log(e1.currentNum);
// // e1.currentNum = 10;
// // console.log(e1.currentNum);

// var e2 = new Employee();
// console.log(e2.currentNum);


// // Employee.prototype.count2 = "Ahmed";
// // Employee.prototype.getCount2 = function(){return count2};
// // Employee.prototype.setCount2 = function(val){count2 = val};

// Employee.prototype.DisplayName = function(){return this.nm;}
// Employee.prototype.DisplayAge = function(){return this.age;}

// // console.log(e1.DisplayAge())
// // console.log(e1.DisplayAge2())
// // console.log(Employee.getCount());
// // // console.log()


// // console.log(e1.count2);
// // // e1.count2 = 10;
// // console.log(e1.count2);
// // console.log(e1);
// // e1.setCount2("SOSO");
// // console.log(e1.getCount2());


// // console.log(e1);




// console.log(e1.constructor);
// console.log(e1.__proto__);
// console.log(e1.__proto__.__proto__);
// console.log(e1.hasOwnProperty("DisplayName"));
// console.log(e1.hasOwnProperty("DisplayAge2"));


// console.log(e1.__proto__.__proto__.__proto__);//null


// console.log(e1.toString());//[object Object]

// //Override
// Employee.prototype.toString = function(){
//     return "Name: " + this.nm + " & Age: " + this.age
// }


// var e1 = new Employee("KOKO",30);
// console.log(e1.toString());


// class Emp extends prn{} ====> prototype

//Inheritance 

// function Person(nm="PrnName", age=5, addr="123 st."){
//         this.nm = nm;
//         this.age = age;
//         this.addr = addr;
//         //only private Methods
// }

// Person.prototype.toString = function(){
//     return "Name: " + this.nm + " & Age: " + this.age + " & Addr: "+ this.addr; 
// }


// function Employee(nam="EmpName", agee=23, addre="123 st.",id=0, salary=10000){
//         // this.nm = nm;
//         // this.age = age;
//         // this.addr = addr;
//         // [].join.bind("Hello")("/")
        
//         //(1)
//         //ctor Chaining
//         Person.bind(this)(nam,agee,addre);

//         this.id = id;
//         this.salary = salary;
// }

// // var e1 = new Employee()

// // var p1 = new Person();
// // var e1 = new Employee();

// //(2)
// //3 ways to inherit from prsn
// //(a)
// // Employee.prototype = new Person();//XXXXXXXX

// //(b)
// // Employee.prototype = Person.prototype;

// // var p1 = new Person();
// // var e1 = new Employee();

// // console.log(p1.toString());
// // console.log(e1.toString());

// // Employee.prototype.getSalary = function(){return this.salary;};

// // console.log(p1.getSalary());//XXXXXXXXXXX
// // console.log(e1.getSalary());//.........


// //(c)
// Employee.prototype = Object.create(Person.prototype);

// var p1 = new Person();
// var e1 = new Employee();

// Employee.prototype.getSalary = function(){return this.salary;};

// // console.log(p1.getSalary());//XXXXXXXXXXX
// console.log(e1.getSalary());//.........


// console.log(p1.constructor);//Person
// console.log(e1.constructor);//Person


// //(3)
// Employee.prototype.constructor = Employee;

// // console.log(p1)


// var p1 = new Person();
// var e1 = new Employee();

// console.log(e1.constructor);
// console.log(p1.constructor);
// console.log(e1);


// ///e1+e2
// var e1 = new Employee();//Salary:10000
// var e2 = new Employee("Aly",25,"456 st.",2, 5000);

// console.log(e1+e2);//10000+5000=15000

// Employee.prototype.valueOf = function(){return this.salary};

// var e1 = new Employee();//Salary:10000
// var e2 = new Employee("Aly",25,"456 st.",2, 5000);

// console.log(e1+e2);//10000+5000=15000
// console.log(e1-e2);//10000-5000=5000
// console.log(e1*e2);//10000*5000=50000000
// console.log(e1>e2);//true


// Employee.prototype.toString = function(){
//     return Person.prototype.toString.call(this) + " & ID: " + this.id + " & salary: " + this.salary;
// }

// var e1 = new Employee("ALy", 25, "789 st.", 5, 7000);
// console.log(e1.toString());


//Abstract Class

function Shape(len=0, wid=0){
     if(this.constructor == Shape)
        throw "Not Allowed";
    this.len = len;
    this.wid = wid;
}

function Rect(len, wid){
    Shape.bind(this)(len,wid);
}


var s1 = new Shape(5,10);//Not Allowed


var r1 = new Rect(5,6);










