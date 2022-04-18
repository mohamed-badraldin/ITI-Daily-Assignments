// var str = "hello world";
// console.log(str.split("").reverse().join(""));

// ////////////////////////////////////////////////////////////

// var str2 = "hello world";
// var x = [].reverse.bind(str2.split(""));
// console.log(x().join(""));

// ////////////////////////////////////////////////////////////

// var str3 = "hello world"
// var rStr3 = ""
// for(let i=str3.length; i>=0; i--){
//     rStr3 += str3[i]
// }

var getterSetter = {
  getSet: function () {
    for (key in this) {
      this["get" + key] = (function () {
        return function () {
          return this.k;
        };
      })();
      this["set" + key] = (function (k) {
        return function (v) {
          this[k] = v;
        };
      })(key);
    }
  },
};

var obj = { name: "", age: "" };

getterSetter.getSet.bind(obj)();
obj.setname("hi");
console.log(obj);

// ///////////////////////////////////////////////////////////////////////////

function Obj(start, step, end) {
  this.data = [];
  for (var i = start; i < end; i += step) {
    this.data.push(i);
  }
  this.addLast = function (val){ if(val == this.data[this.data.length-1]+step) this.data.push(val) ; else throw "error" }
  this.remLast = function (val){ this.data.pop() }
  this.addFrist = function (val){ if(val == this.data[0]-step) this.data.push(val) ; else throw "error" }
  this.remFrist = function (val){ this.data.shift() }
}

var obj1 =  new Obj(1,2,50);
obj1.addLast(51)
obj1.remFrist()
console.log(obj1);


////////////////////////////////////////////////////////////////////////////////

function Box(h, w, l, m) {
  this.height = h;
  this.width = w;
  this.length = l;
  this.material = m;
  this.content = [];
  this.add = function (book) {
    this.content.push(book);
  };
  this.count = this.content.length;
  this.delete = function (t) {
    for (var i = 0; i < this.content.length; i++) {
      if (this.content[i].title == t) {
        this.content.splice(i, 1);
      }
    }
  };
}

function Book(t, nch, au, np, psh, ncy) {
  this.title = t;
  this.numofChapters = nch;
  this.author = au;
  this.numofPages = np;
  this.publisher = psh;
  this.numOfCopies = ncy;
  Book.Bcount++;
}

Book.Bcount = 0;

var box = new Box(10, 10, 10, "m");
var book = new Book("sport", 50, "b", 55, "dd", 400);
var book2 = new Book("food", 50, "b", 55, "dd", 400);

box.add(book);
box.add(book2);
console.log(Book.Bcount);
box.delete("sport")
console.log(box);
