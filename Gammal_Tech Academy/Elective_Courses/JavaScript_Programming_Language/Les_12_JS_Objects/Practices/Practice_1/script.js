//* >>>>>>>>>>>>>>> Les 12 JS Objects <<<<<<<<<<<<<<< *//
"use strict";
/*
let person = ["kifah", 25, "software engineer"];

console.log(person); //* (3) ['kifah', 25, 'software engineer']

console.log(person[0]); //* kifah
console.log(person[1]); //* 25
console.log(person[2]); //* software engineer
*/
//* _____________________________________________________
/*
let personObjects = {
  firstName: "kifah",
  lastName: "saloum",
  age: 26,
  education: "software engineer",
};

console.log(personObjects); //* {firstName: 'kifah', lastName: 'saloum', age: 26, education: 'software engineer'}

console.log(personObjects.firstName); //* kifah
console.log(personObjects.lastName); //* saloum
console.log(personObjects.age); //* 26
console.log(personObjects.education); //* software engineer
*/
//* _____________________________________________________
/*
let personObjects = {
    firstName: "kifah",
    lastName: "saloum",
    age: 26,
    education: "software engineer",
    number: [1, 2, 3, 4, 5],
};

console.log(personObjects); //* {firstName: 'kifah', lastName: 'saloum', age: 26, education: 'software engineer', number: Array(5)}

console.log(personObjects.firstName); //* kifah
console.log(personObjects.lastName); //* saloum
console.log(personObjects.age); //* 26
console.log(personObjects.education); //* software engineer
console.log(personObjects.number); //* (5) [1, 2, 3, 4, 5]
console.log(personObjects.number[0]); //* 1
console.log(personObjects.number[1]); //* 2
console.log(personObjects.number[2]); //* 3
console.log(personObjects.number[3]); //* 4
console.log(personObjects.number[4]); //* 5
*/
//* _____________________________________________________
/*
let personObjects = {
  firstName: "kifah",
  lastName: "saloum",
  age: 26,
  education: "software engineer",
  number: [1, 2, 3, 4, 5],
};

console.log(personObjects); //* {firstName: 'kifah', lastName: 'saloum', age: 26, education: 'software engineer', number: Array(5)}

personObjects.firstName = "douha";
personObjects.lastName = "alshbel";
personObjects.age = 25;

console.log(personObjects); //* {firstName: 'douha', lastName: 'alshbel', age: 25, education: 'software engineer', number: Array(5)}
*/
//* _____________________________________________________
/*
let personObjects = {
  firstName: "kifah",
  lastName: "saloum",
  age: 26,
  education: "software engineer",
  number: [1, 2, 3, 4, 5],
};

let personObjectsKay = Object.keys(personObjects);

console.log(personObjectsKay); //* (5) ['firstName', 'lastName', 'age', 'education', 'number']
*/
//* _____________________________________________________
/*
let personObjects = {
  firstName: "kifah",
  lastName: "saloum",
  age: 26,
  education: "software engineer",
  number: [1, 2, 3, 4, 5],
};

console.log(Object.keys(personObjects)); //* (5) ['firstName', 'lastName', 'age', 'education', 'number']
*/
//* _____________________________________________________
/*
let users = [
    {
        firstName: "kifah",
        lastName: "saloum",
        age: 26,
    },
    {
        firstName: "doha",
        lastName: "alshbeel",
        age: 25,
    },
];

console.log(users); //* (2) [{…}, {…}]
*/
//* _____________________________________________________
/*
let users = [
    {
        firstName: "kifah",
        lastName: "saloum",
        age: 26,
        friends: ["ammar", "wesam"]
    },
    {
        firstName: "doha",
        lastName: "alshbeel",
        age: 25,
        friends: ["maram", "yara"]
    },
];

console.log(users); //* (2) [{…}, {…}]
*/
//* _____________________________________________________
/*
let users = [
    {
        firstName: "kifah",
        friends: ["ammar", "wesam"]
    },
    {
        lastName: "alshbeel",
        age: 25,
    },
];

console.log(users); //* (2) [{…}, {…}]
*/
//* _____________________________________________________
/*
let users = [
    {
        firstName: "kifah",
        friends: ["ammar", "wesam"]
    },
    {
        lastName: "alshbeel",
        age: 25,
    },
];

console.log(users[0]); //* {firstName: 'kifah', friends: Array(2)}

console.log(users[1]); //* {lastName: 'alshbeel', age: 25}
*/
//* _____________________________________________________
/*
let users = [
    {
        firstName: "kifah",
        friends: ["ammar", "wesam"]
    },
    {
        lastName: "alshbeel",
        age: 25,
    },
];

console.log(users[0].firstName); //* kifah
console.log(users[0].friends); //* (2) ['ammar', 'wesam']


console.log(users[1].lastName); //* alshbeel
console.log(users[1].age); //* 25

console.log(users[0].lastName); //* undefined
console.log(users[0].age); //* undefined

console.log(users[1].firstName); //* undefined
console.log(users[1].friends); //* undefined
*/
//* _____________________________________________________

