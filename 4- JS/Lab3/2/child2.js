var str = "Mohamed Badraldin"
var h1 = document.querySelector("h1");
var i =0;

var set = setInterval(() => {
    if(i < str.length)
        h1.textContent += str[i++];
    else
        window.close();
}, 400);
