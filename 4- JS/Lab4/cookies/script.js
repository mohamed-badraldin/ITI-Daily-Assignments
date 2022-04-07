function go() {
  open("profile.html", "_blank");
}

function get_data() {
  var uname = document.getElementById("name").value;
  var age = document.getElementById("age").value;
  var male = document.getElementById("m").checked;
  var female = document.getElementById("f").checked;
  var color = document.getElementById("color").value;
  console.log(color)
  create_cookies(uname, age, female, color, (month = 1));
  go();
}

