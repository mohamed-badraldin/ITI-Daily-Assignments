// //Immutable VS Reference

// // var x = 10;
// // var y = x;
// // console.log(y);//10

// // x = true;

// // console.log(y);//10


// // var arr1 = [1,2,3];
// // // var arr2 = arr1;

// // var arr2=[];
// // for(var i = 0; i<arr1.length ; i++){
// //     arr2[i] = arr1[i];
// // }

// // console.log(arr2);//[1,2,3]

// // arr1[0]="Hamada";
// // console.log(arr2);//["Hamada",2,3] ===> [1,2,3]



// // var obj1 = {nam:"KOKO", age:30};
// // // var obj2 = obj1;//Reference
// // var obj2={};
// // for(var i in obj1){
// //     obj2[i] = obj1[i];
// // }

// // console.log(obj2);

// // obj1.age = 40;
// // console.log(obj2);



// ///Objects ===> Properties & Methods

// // var obj1 = {nam:"KOKO",age:20, display:function(){}};
// // console.log(obj1);//{nam:"KOKO",age:20}

// // // delete obj1.nam;
// // // console.log(obj1);//{age:20}

// // for(i in obj1){
// //     console.log(i);
// // }

// // obj1.display = true;

// // console.log(obj1);//{nam:"KOKO",age:20}


// //(1)Data Descriptor [value - writable - configurable - enumerable]
// //Default value Always ==> false

// //(a)Add Only One Property

// var names = ["KOKO","SOSO"];

// var obj1 = {};
// Object.defineProperty(obj1, "nm",{
//     // value:"KOKO",//Intialization
//     value:names[1],//Intialization
//     writable:false,//[true]=>let user change value || [false]=>User Never change Value
//     configurable:true,//[true]=> user can Delete Prop || [false] Never Delete
//     enumerable:true
// });

// // console.log(obj1);
// // obj1.nm = "SOSO";

// // delete obj1.nm;
// // console.log(obj1);


// // for(i in obj1){
// //     console.log(i);
// // }

// //(a)Add many Properties at Once

// Object.defineProperties(obj1,{
//     "age":{value:20,enumerable:true},
//     "salary":{value:10000,configurable:true},
//     "addr":{value:"123 st."},
//     "display":{value:function(){}}
// })


// // delete obj1.age;
// // obj1.age = 50;

// obj1.salary = 50000;
// // console.log(obj1);

// obj1.display = true;

// console.log(obj1);

// for(i in obj1){
//     console.log(i);
// }



// //(2)Accessor Descriptor [get - set - configurable - enumerable]
// // var ph = "111111";
// // Object.defineProperty(obj1,"phone",{
// //     get:function(){return ph;},
// //     set:function(val){ph = val;}
// // })

// // obj1.phone = "11111111";
// // console.log(obj1.phone);

// // obj1.phone = "22222222222222";
// // console.log(obj1.phone);



// function Employee(nm="EmpName", age=20, salary=10000,phone="111111"){
//     // this.nm = nm;
//     // this.age = age;
//     // this.salary = salary;

//     Object.defineProperties(this,{
//         "nm":{value:nm},
//         "age":{value:age},
//         "salary":{value:salary , writable:false}
//     })

//     // this.phone = phone;
//     Object.defineProperty(this,"phone",{
//         // get:function(){return phone;},
//         // set:function(val){phone = val;},
//         configurable:true,
//         enumerable:true
//     })
// }

// var e1 = new Employee();
// console.log(e1.phone);
// // e1.phone = "222222"
// console.log(e1.phone);
// console.log(e1);



//

var obj = {nm:"LOLO", sal:5000};

Object.seal(obj);//Never Add New Property

// obj.age = 22;

// console.log(obj);


Object.freeze(obj);//Never Change Any Values

obj.nm = "SOSO";
console.log(obj);
// console.log(obj.constructor);

console.log(obj.__proto__);//
console.log(obj.__proto__.__proto__);//

