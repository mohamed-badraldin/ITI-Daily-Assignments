var obj = new URLSearchParams(window.location.search);
var params = Object.fromEntries(obj.entries())

document.getElementById('h1').innerText += params.name
document.getElementById('h2').innerText += params.age