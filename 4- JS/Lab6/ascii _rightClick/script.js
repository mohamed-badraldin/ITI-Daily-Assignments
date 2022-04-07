document.addEventListener('keydown',function get(e){
    document.getElementById('h').innerText = e.key
    document.getElementById('c').innerText = e.keyCode
},false)


document.addEventListener('contextmenu',(event)=>{
    event.preventDefault()
})

document.oncontextmenu