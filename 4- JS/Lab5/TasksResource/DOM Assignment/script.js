var image = document.getElementById("m");
var clone = image.cloneNode(true);
var nav = document.getElementById("nav");

setTimeout(() => {
    image.style.position = "fixed";
    image.style.bottom = "5px";
    image.style.left = "5px";
    
    clone.style.position = "fixed";
    clone.style.right = "10px";
    document.body.appendChild(clone);
}, 2000);
