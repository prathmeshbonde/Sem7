// Name: Prathmesh Bonde
// Roll No.: 42115
var button1 = document.getElementById('btn1');
var flag1 = false;
button1.addEventListener('click', function onClick() {
    if (flag1) {
        flag1 = false;
        document.body.style.backgroundColor = 'red';
    } else {
        flag1 = true;
        document.body.style.backgroundColor = 'green';
    }
});
var button2 = document.getElementById('btn2');
var flag2 = false;
button2.addEventListener('mouseover', function onHover() {
    if (flag2) {
        flag2 = false;
        document.body.style.backgroundColor = 'yellow';
    } else {
        flag2 = true;
        document.body.style.backgroundColor = 'orange';
    }
});