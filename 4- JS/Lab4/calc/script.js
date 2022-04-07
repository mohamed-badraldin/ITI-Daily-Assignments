var sc = document.getElementById("sc");
var frist =""
var second =""
var oprand =""
var sum;
var done=0;

function get(val){
    if(done)sc.value="";
    done=0;
    if(!oprand){
        sc.value += val;
        frist += val;
        // console.log(frist)
    }
    else{
        sc.value += val;
        second += val;
        console.log(second);
    }

    }

    function calc(val){
        sc.value ="";
        oprand=val;
    }

    function equal(){
        var nfrist = +(frist);
        var nsecond = +(second);

        switch(oprand){
            case "+":
                sum = nfrist + nsecond;
                console.log(sum)
                break;
            case "-":
                sum = nfrist - nsecond;
                    break;
            case "x":
                sum = nfrist * nsecond;
                break;
            case "/":
                sum = nfrist / nsecond;
                    break;
        }
        sc.value = sum;
        second="";
        frist="";
        oprand="";
        done=1;
    }

    function clear_c(c){
        console.log(sc.value)
        switch(c){
            case "<<":
                sc.value = sc.value.slice(0,-1);
                if(frist && !second) frist=frist.slice(0,-1);
                if(frist && second) second=second.slice(0,-1)
                break;
            case "C":
                sc.value = "";
                if(frist && !second) frist="";
                if(frist && second) second="";
                break;
        }
    }