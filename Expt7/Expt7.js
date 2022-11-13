function arrayip() {
    let arrval = document.getElementById('2').value;
    Arrayy = arrval.split(',');
    var str = 'You have entered :' + Arrayy;
    document.getElementById('res').innerHTML = str;
}
function pop() {
    Arrayy.pop();
    var str = 'Value is popped';
    document.getElementById('res').innerHTML = str;
}
function pusharr() {
    var tempval = document.getElementById('push').value;
    var val = new Array(tempval);
    let f = Array.isArray(val);
    Arrayy.push(val);
    if (f) {
        var str =
            'Value :' + val + ' is pushed in array and objest is also of type array';
        document.getElementById('res').innerHTML = str;
    } else {
        var str = 'Value :' + val + ' is not of type array';
        document.getElementById('res').innerHTML = str;
    }
}
function pushobj() {
    var tempval = document.getElementById('push').value;
    var val = new Object(tempval);
    let f = Array.isArray(val);
    if (f) {
        var str =
            'Value :' + val + ' is pushed in array and object is also of type array';
        document.getElementById('res').innerHTML = str;
    } else {
        var str = 'Value :' + val + ' is not of type array';
        document.getElementById('res').innerHTML = str;
    }
}
function shiftArr() {
    Arrayy.shift();
    var str = 'Value is shifted from array';
    document.getElementById('res').innerHTML = str;
}
function unshiftArr() {
    var val = document.getElementById('unshift').value;
    Arrayy.unshift(val);
    var str = 'Value is shifted from array';
    document.getElementById('res').innerHTML = str;
}
function inEmpty() {
    Arrayy = [];
    document.getElementById('res').innerHTML = 'Array is Emptied';
}
function inDisplay() {
    var str = '';
    for (var i = 0; i < Arrayy.length; i++) {
        if (Arrayy[i] != undefined) str += Arrayy[i];
        str += ' ';
    }
    document.getElementById('res').innerHTML = str;
}
