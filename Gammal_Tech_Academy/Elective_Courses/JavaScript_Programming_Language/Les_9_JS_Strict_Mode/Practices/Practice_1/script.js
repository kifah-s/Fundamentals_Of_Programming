//* >>>>>>>>>>>>>>> Les 9 JS Strict Mode <<<<<<<<<<<<<<< *//

//* Start using Strict.
"use strict";

/*
let jobs = "jobs";
let hasJobs = true;

if (hasJobs) {
  job = "kifah jobs"; //* Error: job is not defined.
  console.log(jobs);
}
*/
//* _________________________________________________________
/*
let interface = "Interface String"; //* Error: Unexpected strict mode reserved word.
*/
//* _________________________________________________________
/*
function age() {
  let dateOfBirthYear = 1996;
  let age = 2023 - dateOfBirthYear;
  console.log("Age: " + age);
}

age();
*/
//* _________________________________________________________
/*
function age() {
  let dateOfBirthYear = 1996;
  let age = 2023 - dateOfBirthYear;
  //*   console.log("Age: " + age);
  return age;
}

console.log(`Age: ${age()}`);
*/
//* _________________________________________________________
/*
let dateOfBirthYear = 1996;

function age(x) {
    let age = 2023 - x;
    return age;
}

console.log(`Age: ${age(dateOfBirthYear)}`);
*/
//* _________________________________________________________
/*
function claAge(x) {
  let age = 2023 - x;
  return age;
}

let age = claAge(1996);
if (age >= 18) {
  console.log("Yes.");
} else {
    console.log("No.");
}
*/
//* _________________________________________________________
/*
//* ..... functions .....
function claAge(x) {
    let age = 2023 - x;
    return age;
}

function yesOrNo(x) {
    if (x >= 18) {
        console.log("Yes.");
    } else {
        console.log("No.");
    }
}
//* ..... End functions .....

let age = claAge(1996);
yesOrNo(age);
*/
//* _________________________________________________________
/*
function fruits(orange, apple) {
    console.log(`Orange: ${orange}, Apple: ${apple}`);
}

fruits(1, 2);
*/
//* _________________________________________________________
/*
function fruits(orange, apple) {
    console.log(`Orange: ${orange}, Apple: ${apple}`);
}

let orange = 2;
let apple = 2;
fruits(orange, apple);
*/
//* _________________________________________________________
/*
function fruits(orange, apple) {
    return orange + apple;
}

let orange = 2;
let apple = 2;

console.log(`Total fruits: ${fruits(orange, apple)}`);
*/
//* _________________________________________________________
/*
function fruits(orange, apple) {
    return orange + apple;
}

let orange = 2;
let apple = 2;

let total = fruits(orange, apple);
console.log(`Total fruits: ${total}`);
*/
//* _________________________________________________________
/*
function fruits(orange, apple) {
  console.log(`Orange: ${orange}, Apple: ${apple}`);

  let total = orange + appl; //* Error: appl is not defined
  console.log(`Total: ${total}`);
}

let orange = 2;
let apple = 2;

fruits(orange, apple);
*/
//* _________________________________________________________
/*
function fruits(orange, apples) {
  apple = 20;
  return orange + apple;
}

console.log(fruits(10, 15));
*/
//* _________________________________________________________

