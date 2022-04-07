var im = document.getElementById("im");

var i = 1;
var show_;
var again = false;

function action(m) {
  if (i > 6) i = 6;
  if (i < 1) i = 1;
  switch (m) {
    case "NEXT":
      if (i == 6) i = 5;
      im.setAttribute("src", `${++i}.jpg`);
      break;
    case "SHOW":
      if (!again) {
        show_ = setInterval(() => {
          if (i == 6) i = 0;
          im.setAttribute("src", `${++i}.jpg`);
        }, 500);
      }
      again = true;
      break;
    case "STOP":
      clearInterval(show_);
      again = false;
      break;
    case "PREVIUOS":
      if (i == 1) i = 2;
      im.setAttribute("src", `${--i}.jpg`);
      break;
  }
}
