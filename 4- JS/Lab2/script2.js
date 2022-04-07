var str = prompt("Enter your string");
var ch = prompt("Enter your character");
var arr = [];
for (var i = 0; i < str.length; i++) {
  if (str[i] == ch) arr.push(ch);
}
document.write(`Your character is ${ch} repeated ${arr.length} times`);
