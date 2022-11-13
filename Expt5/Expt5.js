// Name: Prathmesh Bonde
// Roll No.: 42115
var deadline = new Date("October 16, 2022 09:30:00").getTime();
document.write('Timer Deadline: October 16, 2022');
var interval = setInterval(function () {
    var now = new Date().getTime(); // current date
    var rem = deadline - now;
    var days = Math.floor(rem / (1000 * 60 * 60 * 24));
    var hours = Math.floor(rem % (1000 * 60 * 60 * 24) / (1000 * 60 * 60));
    var minutes = Math.floor(rem % (1000 * 60 * 60) / (1000 * 60));
    var seconds = Math.floor(rem % (1000 * 60) / (1000));
    document.getElementById('day').innerHTML = days;
    document.getElementById('hour').innerHTML = hours;
    document.getElementById('minute').innerHTML = minutes;
    document.getElementById('second').innerHTML = seconds;
    if (rem < 0) {
        clearInterval(interval);
        document.getElementById('timeup').innerHTML = 'Time Up!!';
        document.getElementById('day').innerHTML = '0';
        document.getElementById('hour').innerHTML = '0';
        document.getElementById('minute').innerHTML = '0';
        document.getElementById('second').innerHTML = '0';
    }
}, 1000);