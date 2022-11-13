// Name: Prathmesh Bonde
// Roll No.: 42115
var arr = [];
var n;
function getlen() {
    var n = document.getElementById('1').value;
    var s = "Given length is: " + n;
    document.getElementById('res').innerHTML = s;
}
function getArray() {
    var val = document.getElementById('2').value;
    arr = val.split(',');
    n = arr.length;
    var len = document.getElementById('1').value;
    if (n > len) {
        arr.length = len;
        n = len;
    }
    var s = "Given array is: " + arr;
    document.getElementById('res').innerHTML = s;
}
function delElement() {
    var index = -1;
    var val = document.getElementById('3').value;
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] == val) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        var s = "Element not present in array";
        document.getElementById('res').innerHTML = s;
    }
    else {
        for (var i = index; i < arr.length - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[arr.length - 1] = undefined;
        var s = "Element " + val + " deleted";
        document.getElementById('res').innerHTML = s;
    }
}
function find() {
    var index = -1;
    var val = document.getElementById('4').value;
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] == val) {
            index = i;
        }
    }
    if (index == -1) {
        var s = "Element is not present in array";
        document.getElementById('res').innerHTML = s;
    }
    else {
        var s = "Element present at index " + index;
        document.getElementById('res').innerHTML = s;
    }
}
function empty() {
    arr = [];
    var s = "Array is emptied";
    document.getElementById('res').innerHTML = s;
}
function display() {
    var s = '';
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] != undefined)
            s += arr[i];
    }
    document.getElementById('res').innerHTML = s;
}
