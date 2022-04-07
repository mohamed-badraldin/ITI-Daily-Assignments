var quer = document.location.search;

var reg = /=\w+/g;
var values = quer.match(reg).join("").split("=");
document.write(`<h1>Your Name Is ${values[1]}<h1>
<h1>Your Age Is ${values[2]}<h1>`)








// u_name = quer.split("").slice(1).join().split("&")[0].split("=")[1].split(",").join("");
// u_age = quer.split("").slice(1).join().split("&")[1].split("=")[1].split(",").join("");
// document.write(`<h1>Your Name Is ${u_name}<h1>
// <h1>Your Age Is ${u_age}<h1>`)