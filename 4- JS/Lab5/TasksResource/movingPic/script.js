var c1 = document.getElementById("c1");

var c2 = document.getElementById("c2");

var t = document.getElementById("t");

var but = document.getElementById("but");

var i = 0;
var rev = false;
var run = false;
var interval;



var go_ = () => {
  interval = setInterval(() => {
    if (i < 92 && !rev) {
      c1.style.left = `${i}%`;
      c2.style.right = `${i}%`;
      t.style.bottom = `${i}%`;
      i++;
    }
    if (i == 92) rev = true;
 
    if (i > 0 && rev) {
      c1.style.left = `${i}%`;
      c2.style.right = `${i}%`;
      t.style.bottom = `${i}%`;
      i--;
    }
    if (i == 0) rev = false;
  }, 30);

  run = true;
};

function go() {
  if (!run) go_();
}

function stop() {
  c1.style.left = `0%`;
  c2.style.right = `0%`;
  t.style.bottom = `0%`;
  clearInterval(interval);
  run = false;
}



