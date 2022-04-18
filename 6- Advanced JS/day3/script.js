function Shape (w,h){
    if( ! (this.constructor == Rect || this.constructor == Square) ) throw "Not Valid Obj"
    // else if (Shape.countRect == 1 || Shape.countRect == 1) throw "over count"
    if(this.constructor == Rect) Shape.countRect++;
    if(this.constructor == Square) Shape.countSquare++;
    
    Object.defineProperties(this,{
        width:{value : w},
        height:{value : h},
    })
}
Shape.countRect = 0;
Shape.countSquare =0;
Shape.prototype.area = function() {return this.w * this.h},
Shape.prototype.perimeter = function() {return (this.w + this.h) *2},

//===================================================================================

function Rect(w,h){
    Shape.bind(this)(w,h) // 1
    Object.defineProperties(this,{
        
        toString:{value : ()=> `width = ${w} , height = ${h} , area = ${this.area} , perimeter = ${this.perimeter}`}
    })
}
Rect.prototype = Object.create(Shape.prototype);  // 2
Rect.prototype.constructor = Rect; // 3
Rect.prototype.valueOf = function(){return this.area}

var r1 = new Rect(3,3)
var r2  = new Rect(2,2)
console.log(r2+r1)

//==================================================================================

function Square (d){
    Square.count++;
    Rect.bind(this)(d,d) // 1
    Object.defineProperties(this,{
        toString:{value : ()=> `width = height = ${d} , area = ${this.area} , perimeter = ${this.perimeter} `}
    })
}
Square.count = 0;
Square.prototype = Object.create(Rect.prototype);  // 2
Square.prototype.constructor = Square; // 3


