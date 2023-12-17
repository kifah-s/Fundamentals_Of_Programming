//* >>>>>>>>>>>>>>> Les 8 JS True OR False <<<<<<<<<<<<<<< *//
/*
let x;
console.log("x: " + Boolean(x));

x = 5;
console.log("x: " + Boolean(x));

console.log("0: " + Boolean(0));

console.log("1: " + Boolean(1));

console.log("true: " + Boolean("true"));

console.log("false: " + Boolean("false"));

console.log("false: " + Boolean(""));

console.log("null: " + Boolean(null));

console.log("undefined: " + Boolean(undefined));

console.log("empty object: " + Boolean({}));
*/
//* ________________________________________________________
/*
let grade = 85;
let gradeExcellency = "fail";

if (grade > 75) {
  gradeExcellency = "Excellent";
} else if (grade > 65) {
  gradeExcellency = "Good";
} else {
  gradeExcellency = "Fail";
}
console.log(gradeExcellency);
*/
//* ________________________________________________________
/*
let grade = 85;
let gradeExcellency = grade > 75 ? "Excellent" : grade > 65 ? "Good" : "Fail";
console.log(gradeExcellency);
*/
//* ________________________________________________________
/*
const mathSubject = "Math";
const scienceSubject = "Science";
let reade = true;

const bag = [];
bag.push(mathSubject);
bag.push(scienceSubject);

if (bag[0] != mathSubject && bag[1] != mathSubject) {
  console.log(mathSubject + " Does note exist in the bag");
  reade = false;
}
if (bag[0] != scienceSubject && bag[1] != scienceSubject) {
  console.log(scienceSubject + " Does note exist in the bag");
  reade = false;
}

if (reade) {
  console.log("Child ready to go to school");
} else {
  console.log("Child Not ready to go to school");
}
*/
//* ________________________________________________________
