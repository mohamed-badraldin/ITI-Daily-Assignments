var p = document.getElementById('PAR')

function ChangeFont(font) {
  switch (font) {
    case "arial":
        p.style.fontFamily = "arial";
      break;
    case "courier":
        p.style.fontFamily = "courier";
      break;
    case "georgia":
        p.style.fontFamily = "georgia";
      break;
    case "impact":
        p.style.fontFamily = "impact";
      break;
    case "times new roman":
        p.style.fontFamily = "times new roman";
      break;
    case "verdana":
        p.style.fontFamily = "verdana";
      break;
  }
}


function ChangeAlign(align){
    switch(align){

        case "left":
            p.style.textAlign = "left";
          break;
        case "center":
            p.style.textAlign = "center";
          break;
        case "right":
            p.style.textAlign = "right";
          break;
        case "justify":
            p.style.textAlign = "justify";
          break;
    }
}


function ChangeHeight(height){
    switch(height){

        case "normal":
            p.style.lineHeight = "normal";
          break;
        case "10px":
            p.style.lineHeight = "10px";
          break;
        case "15px":
            p.style.lineHeight = "15px";
          break;
        case "1.5":
            p.style.lineHeight = "1.5";
          break;
    }
}


function ChangeLSpace(space){
    switch(space){

        case "normal":
            p.style.letterSpacing = "normal";
          break;
        case "-1px":
            p.style.letterSpacing = "-1px";
          break;
        case "2px":
            p.style.letterSpacing = "2px";
          break;
        case "3px":
            p.style.letterSpacing = "3px";
          break;
    }
}

function ChangeIndent(indent){
    switch(indent){

        case "0px":
            p.style.letterSpacing = "0px";
          break;
        case "5px":
            p.style.letterSpacing = "5px";
          break;
        case "15px":
            p.style.letterSpacing = "15px";
          break;
        case "25px":
            p.style.letterSpacing = "25px";
          break;
    }
}

function ChangeTransform(Transform){
    switch(Transform){

        case "none":
            p.style.textTransform = "none";
          break;
        case "capitalize":
            p.style.textTransform = "capitalize";
          break;
        case "uppercase":
            p.style.textTransform = "uppercase";
          break;
        case "lowercase":
            p.style.textTransform = "lowercase";
          break;
    }
}


function ChangeDecorate(Decorate){
    switch(Decorate){

        case "none":
            p.style.textDecoration = "none";
          break;
        case "line-through":
            p.style.textDecoration = "line-through";
          break;
        case "overline":
            p.style.textDecoration = "overline";
          break;
        case "underline":
            p.style.textDecoration = "underline";
          break;
    }
}


function ChangeBorder(Border){
    switch(Border){

        case "none":
            p.style.borderStyle = "none";
          break;
        case "dotted":
            p.style.borderStyle = "dotted";
          break;
        case "double":
            p.style.borderStyle = "double";
          break;
        case "groove":
            p.style.borderStyle = "groove";
          break;
          case "dashed":
            p.style.borderStyle = "dashed";
          break;
        case "insert":
            p.style.borderStyle = "insert";
          break;
        case "solid":
            p.style.borderStyle = "solid";
          break;
        case "outset":
            p.style.borderStyle = "outset";
          break;
          case "ridge":
            p.style.borderStyle = "ridge";
          break;

    }
}


function ChangeBorderColor(color){
    switch(color){

        case "black":
            p.style.borderColor = "black";
          break;
        case "pink":
            p.style.borderColor = "pink";
          break;
        case "red":
            p.style.borderColor = "red";
          break;
        case "green":
            p.style.borderColor = "green";
          break;
          case "blue":
            p.style.borderColor = "blue";
          break;
        case "yellow":
            p.style.borderColor = "yellow";
          break;
        case "purple":
            p.style.borderColor = "purple";
          break;

    }
}






















