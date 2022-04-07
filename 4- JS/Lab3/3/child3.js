
setInterval(() => {
    scrollBy(0,10)
    console.log(window.scrollY)
    if(window.scrollY == 1550)
    window.close();
}, 30);