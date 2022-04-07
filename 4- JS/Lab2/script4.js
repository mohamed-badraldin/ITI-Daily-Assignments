var r = +prompt("Enter your radius here");
var area = Math.PI * r * r;
alert(`Total area of the circle is  ${area}`);

/////////////////////////////////////////////////////////////////////////

var s = +prompt("Enter your number here");
var root = Math.sqrt(s);
alert(`The squar root of ${s} is ${root}`);

/////////////////////////////////////////////////////////////////////////

var c = +prompt("Enter your angle here");

var cos = Math.cos(c* Math.PI/180).toFixed(5);
alert(`Cos${c}\xB0  is  ${cos}`);
