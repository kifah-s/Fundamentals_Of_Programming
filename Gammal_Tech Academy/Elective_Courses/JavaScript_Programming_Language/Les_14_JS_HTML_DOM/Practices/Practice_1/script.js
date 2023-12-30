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

