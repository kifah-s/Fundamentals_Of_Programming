//* >>>>>>>>>>>>>>> Les 10 JS Function <<<<<<<<<<<<<<< *//
"use strict";
/*
* Function ..

function calcAge(year) {
  console.log(2023 - year);
}

calcAge(1996);
calcAge(1995);
*/
//* _______________________________________________________
/*
//* Function Expressions ..

let calcAge = function (year) {
  console.log(2023 - year);
};

calcAge(1996);
calcAge(1995);
*/
//* _______________________________________________________
/*
* Arrow Function ..

let calcAge = (year) => console.log(2023 - year);

calcAge(1996);
calcAge(1995);
*/
//* _______________________________________________________
/*
let calcAge = (year) => {
  console.log(2023 - year);
  console.log("Block Code");
};

calcAge(1996);
calcAge(1995);
*/
//* _______________________________________________________
/*
function calcAge(year) {
  let age = 2023 - year;
  
  console.log(age);
  
  if (age >= 18) {
    console.log("Can enter site.");
  } else {
    console.log("Can Note entre site.");
  }
}

calcAge(1996);
*/
//* _______________________________________________________
/*
function calcAge(year) {
  let age = 2023 - year;
  console.log(age);

  return age;
}

function allowViewSite(year) {
  let age = calcAge(year);
  if (age >= 18) {
    console.log("Can enter site.");
  } else {
    console.log("Can Note entre site.");
  }
}

allowViewSite(1996);
*/
//* _______________________________________________________

