do {
  var u_name = prompt("Enter your name");
  var namReg = /^[a-zA-Z]+$/;
} while (!namReg.test(u_name));

do {
  var u_phone = prompt("Enter your phone");
  var phoneReg = /^[0-9]{8}$/;
} while (!phoneReg.test(u_phone));

do {
  var u_mobile = prompt("Enter your mobile");
  var phoneReg = /^(010|011|012|015)\d{8}$/;
} while (!phoneReg.test(u_mobile));

do {
  var u_mail = prompt("Enter your email");
  var phoneReg = /^[a-zA-z]+@\d+.com$/;
} while (!phoneReg.test(u_mail));

document.write(`<h1> Your name is   ${u_name}</h1>`);
document.write(`<h1> Your phone is   ${u_phone}</h1>`);
document.write(`<h1> Your mobile is   ${u_mobile}</h1>`);
document.write(`<h1> Your email is   ${u_mail}</h1>`);
