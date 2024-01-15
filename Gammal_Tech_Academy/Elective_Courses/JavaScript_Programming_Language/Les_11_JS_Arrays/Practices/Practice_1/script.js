//* >>>>>>>>>>>>>>> Les 11 JS Arrays <<<<<<<<<<<<<<< *//
"use strict";
/*
const friend1 = "kifah";
const friend2 = "douha";
const friend3 = "melad";
const friend4 = "amer";
const friend5 = "amar";

console.log(friend1);
console.log(friend2);
console.log(friend3);
console.log(friend4);
console.log(friend5);
*/
//* ____________________________________________________
/*
const friend = ["kifah", "douha", "melad", "amer", "amar"];

console.log(friend);
*/
//* ____________________________________________________
/*
const friend = ["kifah", "douha", "melad", "amer", "amar"];

console.log(friend[0]);
console.log(friend[1]);
console.log(friend[2]);
console.log(friend[3]);
console.log(friend[4]);
*/
//* ____________________________________________________
/*
const years = [50, 40, 30, 20, 10];

console.log(years);
*/
//* ____________________________________________________
/*
const friend = ["kifah", "douha", "melad", "amer", "amar"];
const years = [50, 40, 30, 20, 10];

friend.push("ale");
years.push(5);

console.log(friend);
console.log(years);
*/
//* ____________________________________________________
/*
const friend = ["kifah", "douha", "melad", "amer", "amar"];
const years = [50, 40, 30, 20, 10];

friend.unshift("saloum");
years.unshift(60);

console.log(friend);
console.log(years);
*/
//* ____________________________________________________
/*
const friend = [];

console.log(friend);
console.log(friend[0]);
*/
//* ____________________________________________________
/*
const friend = ["kifah", "douha"];
console.log(friend);

//* Add Elements.
friend.push("rami");
friend.push("mona");
console.log(friend);

//* Remove Elements.
friend.pop();
friend.pop();
console.log(friend);
*/
//* ____________________________________________________
/*
const friend = ["kifah", "douha"];
console.log(friend);

//* Add Elements.
let pu = friend.push("rami");
console.log(friend);
console.log(pu);

//* Remove Elements.
let po = friend.pop();
console.log(friend);
console.log(po);
*/
//* ____________________________________________________
/*
const friend = ["kifah", "douha"];

friend.push("rami");

let eleIndex = friend.indexOf("rami"); 
let ele2Index = friend.indexOf("saloum"); 

console.log(eleIndex); //* 2
console.log(ele2Index); //* -1
*/
//* ____________________________________________________
/*
const friend = ["kifah", "douha"];

friend.push("rami");

console.log(friend.includes("rami")); //* True
console.log(friend.includes("saloum")); //* False
*/
//* ____________________________________________________
/*
function hasFriend(friendName, friend) {
  console.log(friend.includes(friendName));
}

const friend = ["kifah", "douha"];

hasFriend("kifah", friend); //* True
hasFriend("saloum", friend); //* False
*/
//* ____________________________________________________
/*
function hasFriend(friendName, friend) {
  return friend.includes(friendName);
}

const friend = ["kifah", "douha"];

console.log(hasFriend("kifah", friend)); //* True
console.log(hasFriend("saloum", friend)); //* False
*/
//* ____________________________________________________
/*
const fri_1 = ["kifah", "douha"];
const fri_2 = ["saloum", "alshebel"];

const fri_3 = fri_1.concat(fri_2);

console.log(fri_3); //* (4) ['kifah', 'douha', 'saloum', 'alshebel']
*/
//* ____________________________________________________
/*
let fri_1 = ["kifah", "douha"];
let fri_2 = ["saloum", "alshebel"];

let fri_3 = fri_1.concat(fri_2);

console.log(fri_3); //* (4) ['kifah', 'douha', 'saloum', 'alshebel']
*/
//* ____________________________________________________
/*
let fri_1 = ["kifah", "douha"];

fri_1.concat(["saloum", "alshbel"]);

console.log(fri_1); //* (2) ['kifah', 'douha']
*/
//* ____________________________________________________
/*
let fri_1 = ["kifah", "douha"];

let fri_2 = fri_1.concat(["saloum", "alshbel"]);

console.log(fri_2); //* (4) ['kifah', 'douha', 'saloum', 'alshbel']
*/
//* ____________________________________________________
/*
let fri_1 = ["kifah", "douha"];

fri_1 = fri_1.concat(["saloum", "alshbel"]);

console.log(fri_1); //* (4) ['kifah', 'douha', 'saloum', 'alshbel']
*/
//* ____________________________________________________
/*
const fri_1 = ["kifah", "douha"];

fri_1 = fri_1.concat(["saloum", "alshbel"]);

console.log(fri_1); //* Uncaught TypeError: Assignment to constant variable.
*/
//* ____________________________________________________
/*
const fri_1 = ["kifah", "douha", "amar", "maram", "reham", "hanen"];

fri_1.splice();

console.log(fri_1); //* (6) ['kifah', 'douha', 'amar', 'maram', 'reham', 'hanen']
*/
//* ____________________________________________________
/*
const fri_1 = ["kifah", "douha", "amar", "maram", "reham", "hanen"];

const fri_2 = fri_1.splice();

console.log(fri_2); //* []
*/
//* ____________________________________________________
/*
const fri_1 = ["kifah", "douha", "amar", "maram", "reham", "hanen"];

const fri_2 = fri_1.splice(2);

console.log(fri_2); //* (4) ['amar', 'maram', 'reham', 'hanen']
*/
//* ____________________________________________________
/*
const fri_1 = ["kifah", "douha", "amar", "maram", "reham", "hanen"];

fri_1.splice(2);

console.log(fri_1); //* (2) ['kifah', 'douha']
*/
//* ____________________________________________________
/*
const fri_1 = ["kifah", "douha", "amar", "maram", "reham", "hanen"];

fri_1.splice(0, 2);

console.log(fri_1); //* (4) ['amar', 'maram', 'reham', 'hanen']
*/
//* ____________________________________________________
/*
const fri_1 = ["kifah", "douha", "amar", "maram", "reham", "hanen"];

const fri_2 = fri_1.splice(0, 2);

console.log(fri_2); //* (2) ['kifah', 'douha']
*/
//* ____________________________________________________
/*
const fri_1 = ["kifah", "douha", "amar", "maram", "reham", "hanen"];

const fri_2 = fri_1.splice(0, 2);

console.log(fri_1); //* (4) ['amar', 'maram', 'reham', 'hanen']
console.log(fri_2); //* (2) ['kifah', 'douha']
*/
//* ____________________________________________________
/*
const fri_1 = ["kifah", "douha", "amar", "maram", "reham", "hanen"];

const fri_2 = fri_1.splice(0, 2);

console.log(fri_1, fri_2); //* (4) ['amar', 'maram', 'reham', 'hanen'] (2) ['kifah', 'douha']
*/
//* ____________________________________________________
