var images = document.querySelectorAll(".im")
var i=0;
var set1;
var set2;

run();
function run(){
    set1 = setInterval(() => {

        for(j=0; j<5; j++){
        images[j] = images[j].setAttribute("src", "1.jpg")
        }  
        if(i>4)i=0;
        images[i] = images[i].setAttribute("src", "2.jpg")
        i++;
    },1000);
    
   
    
}

var d = document.getElementById('d');
d.onmouseover = function(){ clearInterval(set1)}
d.onmouseout = function(){run()}



