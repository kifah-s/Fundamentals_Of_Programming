//* >>>>>>>>>>>>>>> Les 13 JS For Loop <<<<<<<<<<<<<<< *//
"use strict";
/*
let myArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

console.log(myArr[0]); //* 1
console.log(myArr[1]); //* 2
console.log(myArr[2]); //* 3
console.log(myArr[3]); //* 4
console.log(myArr[4]); //* 5
console.log(myArr[5]); //* 6
console.log(myArr[6]); //* 7
console.log(myArr[7]); //* 8
console.log(myArr[8]); //* 9
console.log(myArr[9]); //* 10
*/
//* ________________________________________________________
/*
let myArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

for (let index = 0; index < myArr.length; index++) {
  console.log(myArr[index]);
}

//* 1
//* 2
//* 3
//* 4
//* 5
//* 6
//* 7
//* 8
//* 9
//* 10
*/
//* ________________________________________________________
/*
let myArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

console.log(
  myArr[0] +
    myArr[1] +
    myArr[2] +
    myArr[3] +
    myArr[4] +
    myArr[5] +
    myArr[6] +
    myArr[7] +
    myArr[8] +
    myArr[9]
); //* 55
*/
//* ________________________________________________________
/*
let myArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
let result =
  myArr[0] +
  myArr[1] +
  myArr[2] +
  myArr[3] +
  myArr[4] +
  myArr[5] +
  myArr[6] +
  myArr[7] +
  myArr[8] +
  myArr[9];

console.log(result); //* 55
*/
//* ________________________________________________________
/*
let myArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
let result = 0;

for (let i = 0; i < myArr.length; i++) {
  result = result + myArr[i];
}

console.log(result); //* 55
*/
//* ________________________________________________________
/*
let myArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
let result = 0;

for (let i = 0; i < myArr.length; i++) {
    result += myArr[i];
}

console.log(result); //* 55
*/
//* ________________________________________________________
/*
let books = ["Book 1", "Book 2", "Book 3"];

let valueFromUser = prompt("Please enter Book name your search: ");

for (let i = 0; i < books.length; i++) {
    if (valueFromUser == books[i]) {
        console.log(`${valueFromUser} Existing.`);
    }
}
*/
//* ________________________________________________________
/*
let books = ["Book 1", "Book 2", "Book 3"];

let valueFromUser = prompt("Please enter Book name your search: ");
let exi = false;

for (let i = 0; i < books.length; i++) {
    if (valueFromUser == books[i]) {
        console.log(`${valueFromUser} Existing.`);
        exi = true;
    }
}
if (exi == false) {
    console.log(`${valueFromUser} NOT Existing.`);
}
*/
//* ________________________________________________________
/*
function checkBook(value, array) {
  let exi = false;

  for (let i = 0; i < array.length; i++) {
    if (value == array[i]) {
        console.log(`${value} Existing.`);
        exi = true;
    }
}
if (exi == false) {
    console.log(`${value} NOT Existing.`);
}
}

let books = ["Book 1", "Book 2", "Book 3"];
let valueFromUser = prompt("Please enter Book name your search: ");

checkBook(valueFromUser, books);
*/
//* ________________________________________________________
/*
function checkBook(value, array) {
  if (!array) {
    console.log("Array is empty");
  }

  let exi = false;

  for (let i = 0; i < array.length; i++) {
      if (value == array[i]) {
      console.log(`${value} Existing.`);
      exi = true;
    }
  }
  if (exi == false) {
    console.log(`${value} NOT Existing.`);
}
}

let books;
let valueFromUser = prompt("Please enter Book name your search: ");

checkBook(valueFromUser, books);
*/
//* ________________________________________________________
/*
function checkBook(value, array) {
  if (array) {
    let exi = false;

    for (let i = 0; i < array.length; i++) {
        if (value == array[i]) {
            console.log(`${value} Existing.`);
            exi = true;
        }
    }
    if (exi == false) {
        console.log(`${value} NOT Existing.`);
    }
    console.log("Array is empty");
}
}

let books = [];
let valueFromUser = prompt("Please enter Book name your search: ");

checkBook(valueFromUser, books);
*/
//* ________________________________________________________
/*
function checkBook(value, array) {
  let exi = false;

  for (let i = 0; i < array.length; i++) {
      if (value == array[i]) {
          console.log(`${value} Existing.`);
      exi = true;
      break;
    }
  }
  if (exi == false) {
    console.log(`${value} NOT Existing.`);
}
}

let books = ["Book 1", "Book 2", "Book 3"];
let valueFromUser = prompt("Please enter Book name your search: ");

checkBook(valueFromUser, books);
*/
//* ________________________________________________________
/*
function checkBook(value, array) {
    let exi = false;
    
    for (let i = 0; i < array.length; i++) {
        if (value == array[i]) {
            console.log(`${value} Existing.`);
            exi = true;
            return 0;
        }
    }
    if (exi == false) {
        console.log(`${value} NOT Existing.`);
    }
}

let books = ["Book 1", "Book 2", "Book 3"];
let valueFromUser = prompt("Please enter Book name your search: ");

checkBook(valueFromUser, books);
*/
//* ________________________________________________________
/*
function checkBook(value, array) {
  let exi = false;
  
  for (let i = 0; i < array.length; i++) {
      if (value == array[0]) {
          continue;
    }
    if (value == array[i]) {
        console.log(`${value} Existing.`);
        exi = true;
        return 0;
    }
}
if (exi == false) {
    console.log(`${value} NOT Existing.`);
}
}

let books = ["Book 1", "Book 2", "Book 3"];
let valueFromUser = prompt("Please enter Book name your search: ");

checkBook(valueFromUser, books);
*/
//* ________________________________________________________
/*
function checkBook(value, array) {
  let exi = false;

  for (let i = 0; i < array.length; i++) {
    if (value == "Book 2") {
      continue;
    }
    if (value == array[i]) {
      console.log(`${value} Existing.`);
      exi = true;
      return 0;
    }
  }
  if (exi == false) {
    console.log(`${value} NOT Existing.`);
  }
}

let books = ["Book 1", "Book 2", "Book 3"];
let valueFromUser = prompt("Please enter Book name your search: ");

checkBook(valueFromUser, books);
*/
//* ________________________________________________________
/*
function checkBook(value, array) {
  let exi = false;
  let i = 0;
  
  while (i < array.length) {
      if (value == array[i]) {
          console.log(`${value} Existing.`);
          exi = true;
          return 0;
        }
        
        i++;
    }
    if (exi == false) {
        console.log(`${value} NOT Existing.`);
    }
}

let books = ["Book 1", "Book 2", "Book 3"];
let valueFromUser = prompt("Please enter Book name your search: ");

checkBook(valueFromUser, books);
*/
//* ________________________________________________________
/*
function checkBook(value, array) {
  let exi = false;

  for (let i = array.length; i >= 0; i--) {
      if (value == array[i]) {
          console.log(`${value} Existing.`);
          exi = true;
          return 0;
        }
    }
    if (exi == false) {
        console.log(`${value} NOT Existing.`);
    }
}

let books = ["Book 1", "Book 2", "Book 3"];
let valueFromUser = prompt("Please enter Book name your search: ");

checkBook(valueFromUser, books);
*/
//* ________________________________________________________
/*
debugger;
*/
//* ________________________________________________________
