var arr = [];
for (var i = 0; i < 5; i++) {
  var num = prompt(`Enter number_${i + 1}`);
  arr.push(num);
}

document.write(`<h1>You inserted ${arr.join()}</h1>`);
document.write(
  `<h1>Your values after sorted descending  ${arr.sort(function (a, b) {
    return a - b;
  })}</h1>`
);
document.write(
  `<h1>Your values after sorted ascending  ${arr.sort(function (a, b) {
    return b - a;
  })}</h1>`
);
