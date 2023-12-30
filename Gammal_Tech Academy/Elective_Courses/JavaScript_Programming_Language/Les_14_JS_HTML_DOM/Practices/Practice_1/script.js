//* >>>>>>>>>>>>>>> Les 14 JS HTML DOM <<<<<<<<<<<<<<< *//
"use strict";
//* ______________________________________________________
/*
let ele = document.getElementById("div_1");
console.log(ele);
*/
//* ______________________________________________________
/*
let con_title = document.getElementById("con_title");
console.log(con_title);

con_title.innerHTML = "Hello, world"
*/
//* ______________________________________________________
/*
let ele1 = document.getElementById("div_1");
console.log(ele1);
ele1.innerHTML = "Hello";

let ele2 = document.getElementById("div_2");
console.log(ele2);
ele2.innerHTML = "kifah";

let ele3 = document.getElementById("div_3");
console.log(ele3);
ele3.innerHTML = "saloum";
*/
//* ______________________________________________________
/*
let ele1 = document.getElementById("div_1");
let ele2 = document.getElementById("div_2");
let ele3 = document.getElementById("div_3");

ele1.addEventListener("click", function () {
    if (this.innerHTML == 1) {
        this.innerHTML = "Hello";
  } else {
    this.innerHTML = 1;
}
});

ele2.addEventListener("click", function () {
    if (this.innerHTML == 2) {
        this.innerHTML = "Kifah";
    } else {
        this.innerHTML = 2;
    }
});

ele3.addEventListener("click", function () {
    if (this.innerHTML == 3) {
        this.innerHTML = "Saloum";
    } else {
        this.innerHTML = 3;
    }
});
*/
//* ______________________________________________________
/*
let ele1 = document.getElementById("div_1");
ele1.style.backgroundColor = "red";
*/
//* ______________________________________________________
/*
let ele1 = document.getElementById("div_1");
let ele2 = document.getElementById("div_2");
let ele3 = document.getElementById("div_3");

ele1.addEventListener("click", function () {
    if (this.innerHTML == 1) {
        this.innerHTML = "Hello";
        this.style.backgroundColor = "red";
    } else {
        this.innerHTML = 1;
        this.style.backgroundColor = "aquamarine";
    }
});

ele2.addEventListener("click", function () {
    if (this.innerHTML == 2) {
        this.innerHTML = "Kifah";
        this.style.backgroundColor = "red";
    } else {
        this.innerHTML = 2;
        this.style.backgroundColor = "aquamarine";
    }
});

ele3.addEventListener("click", function () {
    if (this.innerHTML == 3) {
        this.innerHTML = "Saloum";
        this.style.backgroundColor = "red";
    } else {
        this.innerHTML = 3;
        this.style.backgroundColor = "aquamarine";
    }
});
*/
//* ______________________________________________________
/*
let elements = document.querySelectorAll('.content div');

console.log(elements[0]);
console.log(elements[1]);
console.log(elements[2]);
*/
//* ______________________________________________________
/*
let elements = document.querySelectorAll(".content div");

console.log(elements);
console.log(elements[0]);
console.log(elements[1]);
console.log(elements[2]);

elements[0].addEventListener("click", function () {
  if (elements[0].innerHTML == 1) {
      elements[0].innerHTML = "Good";
    } else {
        elements[0].innerHTML = 1;
    }
});

elements[1].addEventListener("click", function () {
  if (elements[1].innerHTML == 2) {
      elements[1].innerHTML = "Good";
    } else {
        elements[1].innerHTML = 2;
    }
});

elements[2].addEventListener("click", function () {
    if (elements[2].innerHTML == 3) {
        elements[2].innerHTML = "Good";
    } else {
        elements[2].innerHTML = 3;
    }
});
*/
//* ______________________________________________________
/*
let elements = document.getElementsByTagName("div");
console.log(elements);
*/
//* ______________________________________________________
/*
let elements = document.getElementById("content");
console.log(elements);

let ele = elements.getElementsByTagName("div");
console.log(ele);
*/
//* ______________________________________________________
/*
let elements = document.getElementById("content");
console.log(elements);

let ele = elements.getElementsByTagName("div");
console.log(ele);

console.log(ele[0]);
console.log(ele[1]);
console.log(ele[2]);
*/
//* ______________________________________________________
/*
let elements = document.getElementById("content");
console.log(elements);

let ele = elements.getElementsByTagName("div");
console.log(ele);

console.log(ele[0]);
console.log(ele[1]);
console.log(ele[2]);

function ele_0() {
    ele[0].style.backgroundColor = "red";
}

function ele_1() {
    ele[1].style.backgroundColor = "red";
}

function ele_2() {
    ele[2].style.backgroundColor = "red";
}

ele_0();
ele_1();
ele_2();
*/
//* ______________________________________________________
/*
let newElement = document.createElement("div");
newElement.innerHTML = "New Element"
console.log(newElement);

document.body.append(newElement);
*/
//* ______________________________________________________