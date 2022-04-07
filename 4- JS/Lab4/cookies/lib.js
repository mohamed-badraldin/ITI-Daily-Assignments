function create_cookies(uname, age, female, color, month = 1) {
  var date = new Date();
  date.setMonth(date.getMonth() + month);
  document.cookie = `uName=${uname};expires=${date}`;
  document.cookie = `age=${age};expires=${date}`;
  if (female) document.cookie = `gender=f;expires=${date}`;
  else document.cookie = `gender=m;expires=${date}`;

  document.cookie = `color=${color};expires=${date}`;
  document.cookie = `visits=0;expires=${date}`;
}

function display_cookies() {
  var cookies = document.cookie.split(";");
  arrOfCookies = [];
  for (i = 0; i < cookies.length; i++) {
    var key = cookies[i].trim().split("=")[0];
    var value = cookies[i].trim().split("=")[1];
    arrOfCookies[key] = value;
  }
  return arrOfCookies;
}

function delete_cookies() {
  var arr = display_cookies();
  for (k in arr) {
    document.cookie = `${k}=;expiers=1-1-2001`;
  }
}

function update_cookies_visit(month = 1) {
  var vNum = 0;
  var cookies = display_cookies();
  for (k in cookies) {
    if (k == "visits") vNum += +cookies[k];
  }
  var date = new Date();
  date.setMonth(date.getMonth() + month);
  document.cookie = `visits=${vNum};expires=${date}`;
}

function update_cookies_visit() {
  var vNum = 0;
  var date = new Date().setMonth(new Date().getMonth() + 1);
  var cookies = display_cookies();
  for (k in cookies) {
    if (k == "visits") vNum += parseInt(cookies[k].trim());
  }
  document.cookie = `visits=${++vNum};expires=${date}`;
}
