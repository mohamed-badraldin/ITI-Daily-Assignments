
function create_cookies(key, val, month = 1) {
  if (arguments.length > 3) throw "Error";

  if ((typeof key != "string") || (arrguments <2) ) throw "Error";

  var date = new Date();
  date.setMonth(date.getMonth() + month);
  document.cookie = `uName=${val};expires=${date}`;
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
/////////////////////////////////////////////////////////////////
function display_cookie(cookie) {
  var arrOfCookies = display_cookies();

  if (arrOfCookies[cookie]) return arrOfCookies[cookie];
  else throw "Cookie is not found";
}
/////////////////////////////////////////////////////////////////
function delete_cookies() {
  var arr = display_cookies();
  for (k in arr) {
    document.cookie = `${k}=;expiers=1-1-2001`;
  }
}

function update_cookies_visit(month = 1) {
  var cookies = display_cookies();
  for (k in cookies) {
    if (k == "visits") (+cookies['visits'])++;
  }
  var date = new Date();
  date.setMonth(date.getMonth() + month);
  document.cookie = `visits=${vNum};expires=${date}`;
}
