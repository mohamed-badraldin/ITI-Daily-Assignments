function move(){
    var dir1 = 0;
    var dir2 = 120;
    var newtab = open("./child.html","newtab","width=50,height=50")
    setInterval(() => {
        if(dir1 <= 120 && dir2 == 120){
            newtab.moveBy(20,10);
            dir1++;
        }
        else{
            newtab.moveBy(-20,-10);
            dir2--;
            if(dir2 == 0){
                dir2 = 120;
                dir1 = 0;
            } 
        }
    }, 10);
}