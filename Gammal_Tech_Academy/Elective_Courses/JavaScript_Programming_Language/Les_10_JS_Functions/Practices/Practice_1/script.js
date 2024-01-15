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
/*
function calcAge(year) {
  let age = 2023 - year;
  console.log(age);

  return age;
}

function allowViewSite(year) {
  let age = calcAge(year);
  
  if (age >= 18) {
    return true;
  } else {
    return false;
  }
}

function authorize(year) {
  let auth = allowViewSite(year);
  
  if (auth == true) {
    console.log("Can enter site.");
  } else {
    console.log("Can Note entre site.");
  }
}

authorize(1996);
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
    return true;
  } else {
    return false;
  }
}

function authorize(year) {
  if (allowViewSite(year) == true) {
    console.log("Can enter site.");
  } else {
    console.log("Can Note entre site.");
  }
}

authorize(1996);
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
    return true;
  } else {
    return false;
  }
}

function authorize(year) {
  if (allowViewSite(year)) {
    console.log("Can enter site.");
  } else {
    console.log("Can Note entre site.");
  }
}

authorize(1996);
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
    return true;
  } else {
    return false;
  }
}

function authorize(year) {
  if (allowViewSite(year)) {
    console.log("Can enter site.");
  } else {
    console.log("Can Note entre site.");
  }
}

authorize(1996);
authorize(1990);
authorize(2000);
authorize(2010);
authorize(2020);
*/
//* _______________________________________________________
/*
function calcAge(year) {
  const age = 2023 - year;
  console.log(age);

  return age;
}

function allowViewSite(year) {
  let age = calcAge(year);
  
  if (age >= 18) {
    return true;
  } else {
    return false;
  }
}

function authorize(year) {
  if (allowViewSite(year)) {
    console.log("Can enter site.");
  } else {
    console.log("Can Note entre site.");
  }
}

authorize(1996);
authorize(1990);
authorize(2000);
authorize(2010);
authorize(2020);
*/
//* _______________________________________________________
/*
let calcAge = (year) => {
  const age = 2023 - year;
  console.log(age);

  return age;
};

function allowViewSite(year) {
  let age = calcAge(year);
  
  if (age >= 18) {
    return true;
  } else {
    return false;
  }
}

function authorize(year) {
  if (allowViewSite(year)) {
    console.log("Can enter site.");
  } else {
    console.log("Can Note entre site.");
  }
}

authorize(1996);
authorize(1990);
authorize(2000);
authorize(2010);
authorize(2020);
*/
//* _______________________________________________________
/*
* Global Variable.
const currentYear = 2023; 

let calcAge = (year) => {
  const age = currentYear - year;
  console.log(age);
  
  return age;
};

function allowViewSite(year) {
  let age = calcAge(year);
  
  if (age >= 18) {
    return true;
  } else {
    return false;
  }
}

function authorize(year) {
  if (allowViewSite(year)) {
    console.log("Can enter site.");
  } else {
    console.log("Can Note entre site.");
  }
}

authorize(1996);
authorize(1990);
authorize(2000);
authorize(2010);
authorize(2020);
*/
//* _______________________________________________________
