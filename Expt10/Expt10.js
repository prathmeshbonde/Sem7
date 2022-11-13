const prompt = require('prompt-sync')();
const table = parseInt(prompt('Enter an integer: '));
console.log('Name: Prathmesh Bonde, ROLL NO.: 42115');
var length = 10;
var i = 1;
console.log('Multiplication table ' + table + ' using for loop.');
for (i = 1; i <= length; i++) {
    const result = i * table;
    console.log(`${table} * ${i} = ${result}`);
}
i = 1;
console.log('Multiplication table ' + table + ' using while loop.');
while (i <= length) {
    const result = i * table;
    console.log(`${table} * ${i} = ${result}`);
    i++;
}
i = 1;
console.log('Multiplication table ' + table + ' using do while loop.');
do {
    const result = i * table;
    console.log(`${table} * ${i} = ${result}`);
    i++;
} while (i <= length);