// Name : Prathmesh Bonde
// Roll no : 42115
function reverseString() {
    let a = document.getElementById('String1').value;
    let b = a.split('').reverse().join('');
    document.getElementById('Ans1').innerHTML = b;
}
function replaceCharInString() {
    let c = document.getElementById('String2').value;
    let d = document.getElementById('char1').value;
    let e = document.getElementById('char2').value;
    let f = c.replace(d, e);
    document.getElementById('Ans2').innerHTML = f;
}
function isPalindrome() {
    var s3 = document.getElementById('s3').value;
    var s1 = s3.split('').reverse().join('');
    let result = s1.localeCompare(s3);
    if (result == 0) {
        ans = 'Given string is palindrome';
    } else {
        ans = 'Given string is not palindrome';
    }
    document.getElementById('display2').innerHTML = ans;
}