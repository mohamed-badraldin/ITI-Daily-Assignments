
for(let i=1; i<=6; i++){
document.write(`<h${i}>This is header number${i}</h${i}>`);
}


// var sum=0;
// do{
// var num = +(prompt("Insert your number"));
// sum += num
// }while(sum <= 100 && num != 0 );

// console.log(sum);


function sum(){
    var _sum =0
    for(var i=0; i<arguments.length;i++){
        _sum += arguments[i]
    }
    return _sum
}