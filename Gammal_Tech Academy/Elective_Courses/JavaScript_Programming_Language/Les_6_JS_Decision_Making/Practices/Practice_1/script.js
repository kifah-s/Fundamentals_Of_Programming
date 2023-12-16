//* >>>>>>>>>>>>>>> Les 6 JS Decision Making <<<<<<<<<<<<<<< *//

/*
let grade = 70;

if (grade > 70) {
  console.log("Good");
}
if (grade < 70) {
  console.log("Fail");
}
if (grade == 70) {
  console.log("Fail");
}
*/
//* _______________________________________________________________________
/*
let grade = 70;

if (grade >= 70) {
    console.log("Good");
} else {
    console.log("Fail");
}
*/
//* _______________________________________________________________________
/*
let age = 18;

if (age > 18) {
    console.log("Can get a drive lesson");
}
if (age == 18) {
    console.log("Can get a drive lesson");
}
if (age < 18) {
    console.log("Try agin next year");
}
*/
/*
let age = 18;

if (age >= 18) {
  console.log("Can get a drive lesson");
} else {
  console.log("Try agin next year");
}
*/
//* _______________________________________________________________________
/*
let age = prompt("Please enter your age: ");

if (age >= 18) {
  console.log("Can get a drive lesson");
} else {
  console.log("Try agin next year");
}
*/
//* _______________________________________________________________________

//* Simple Calculator ..
/*
let num1 = Number(prompt("Please enter first number:"));
let proc = prompt("Please enter Mathematical process:");
let num2 = Number(prompt("Please enter second number:"));
let result = 0;

if (proc == "+") {
    result = num1 + num2;
}
else if (proc == "-") {
    result = num1 - num2;
}
else if (proc == "*") {
    result = num1 * num2;
}
else if (proc == "/") {
    result = num1 / num2;
}
console.log(`Result is: ${result}`);
*/
//* _______________________________________________________________________
/*
let age = 20;

if (age >= 20 && age < 30) {
    console.log("Youth");
}
*/
//* _______________________________________________________________________
/*
let age = 40;

if (age >= 20 || age < 30) {
    console.log("Youth");
}
*/
//* _______________________________________________________________________
/*
let age = "40";

if (age == 40) {
    console.log("Youth");
}
if (age === 40) {
  console.log("Youth");
}
//* Note: in JS language, " === " operator check variable value and variable type.
*/
//* _______________________________________________________________________
/*
let num1 = Number(prompt("Please enter first number:")); //* Enter string.. for example: kifah.
let proc = prompt("Please enter Mathematical process:");
let num2 = Number(prompt("Please enter second number:"));
let result = 0;

if (proc == "+") {
    result = num1 + num2;
}
else if (proc == "-") {
    result = num1 - num2;
}
else if (proc == "*") {
    result = num1 * num2;
}
else if (proc == "/") {
    result = num1 / num2;
}
console.log(`Result is: ${result}`);
//* NaN: Note a number (Failed to convert to a number).
*/
//* _______________________________________________________________________
/*
let num1 = Number(prompt("Please enter first number:"));
let proc = prompt("Please enter Mathematical process:");
let num2 = Number(prompt("Please enter second number:"));
let result = 0;

if (proc == "+" || proc == "plus") {
    result = num1 + num2;
} else if (proc == "-" || proc == "minus") {
  result = num1 - num2;
} else if (proc == "*" || proc == "multiply") {
    result = num1 * num2;
} else if (proc == "/" || proc == "division") {
    result = num1 / num2;
}
console.log(`Result is: ${result}`);
*/
//* _______________________________________________________________________

