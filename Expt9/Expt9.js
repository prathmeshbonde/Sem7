// Name: Prathmesh Bonde
// Roll No.: 42115
function submit_form() {
    var regName = /^[a-zA-Z]+ [a-zA-Z]+$/;
    var name = document.getElementById('st_name').value;
    var mobile_no = document.getElementById('st_mobile_no').value;
    var email_id = document.getElementById('st_email_id').value;
    var roll_no = document.getElementById('st_roll_no').value;
    var validations = [];
    var mail_format = /^([a-z0-9_\.\-])+\@(([a-z0-9\-])+\.)+([a-z0-9]{ 2, 4 }) +$ /;
    const name_arr = name.split(' ');
    if (name.length == 0) {
        validations.push('Name is incomplete');
    }
    if (mobile_no.length == 0) {
        validations.push('Mobile no is incomplete');
    }
    if (email_id.length == 0) {
        validations.push('Email ID is incomplete');
    }
    if (roll_no.length == 0) {
        validations.push('Roll no is incomplete');
    }
    if (!regName.test(name)) {
        validations.push(' Name is incorrect');
    }
    if (mobile_no.length != 10) {
        validations.push('Mobile number is incorrect');
    }
    console.log(email_id.match(mail_format));
    if (email_id.match(mail_format)) {
    } else {
        validations.push('Email id is incorrect');
    }
    if (roll_no < 10000) {
        validations.push('Roll No is incorrect');
    }
    console.log(validations);
    var len = validations.length;
    console.log(len);
    if (len === 0) {
        document.getElementById('output').innerHTML = 'Congraulations!!';
    } else {
        var i = 0;
        var str = '';
        for (i = 0; i < validations.length; i++) {
            str += validations[i] + '<br>';
        }
        document.getElementById('output').innerHTML = str;
    }
}
