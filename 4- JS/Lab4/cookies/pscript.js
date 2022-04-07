
var nam = document.getElementById('name')
var vis =document.getElementById('visit')
var im = document.getElementById('im')

window.onload = function(){
    update_cookies_visit()
    var cookies = display_cookies()
    var uName;
    var visits;
    var color;
    var gender;
    for(k in cookies){
        if(k == 'uName') uName = cookies[k]
        if(k == 'visits') visits = cookies[k]
        if(k == 'color') color = cookies[k]
        if(k == 'gender') gender = cookies[k]
    }
    nam.textContent = uName;
    vis.textContent = visits;
    nam.style.color = color;
    vis.style.color = color;
    console.log(gender)
    if(gender == 'f') im.setAttribute('src','2.jpg')
}




