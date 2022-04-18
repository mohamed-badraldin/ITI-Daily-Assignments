var myFun = function (x,y){
    if(Number.isFinite(x) && Number.isFinite(y))  return x+y;  // isfinite
    else throw "You should pass only integer";
    
}

// console.log(myFun(4,""))


function check (x,y){
    if(arguments.length != 2) throw "Num of params must be two"
    return "ok"
}

// console.log(check(5,5))


function Rect(w,h){

    var x =
    {
        width:()=>w,
        height: ()=>h,
        area: ()=>w*h,
        ocean: ()=>(w+h)*2,
        display: ()=> `width = ${w} , height = ${h} , area = ${this.area} , ocean = ${this.ocean}`
    }
}

var r = new Rect(5,10)
// console.log(r.display)