var str = prompt("Enter your string");

var sensitive1 = confirm("Is the string case sensitive");

check1(str, sensitive1)
  ? document.write("<h1>Its a palindrome</h1>")
  : document.write("<h1>Its not a palindrome</h1>");

function check1(str, sens) {
  var palind = 1;
  if (!sens) {
    str = str.toUpperCase();
    
  } 
  for (var i = 0; i < str.length / 2; i++) {
    if (str[i] != str[str.length - 1 - i]) palind = 0;
  }
  
  return palind;
}
