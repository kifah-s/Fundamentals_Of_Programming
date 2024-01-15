//* >>>>>>>>>>>>>>> Les 7 JS Switch <<<<<<<<<<<<<<< *//
/*
let num1 = Number(prompt("Please enter first number: "));
let num2 = Number(prompt("Please enter second number: "));
let operation = prompt("Please enter operation: ");
let result = 0;

switch (operation) {
  case "+": {
    result = num1 + num2;
    console.log(`Result = ${result}`);
    break;
  }

  case "-": {
    result = num1 - num2;
    console.log(`Result = ${result}`);
    break;
  }

  case "*": {
    result = num1 * num2;
    console.log(`Result = ${result}`);
    break;
  }

  case "/": {
    result = num1 / num2;
    console.log(`Result = ${result}`);
    break;
  }

  default:
    {
      console.log("Please try again");
    }
    break;
}
*/
//* ___________________________________________________________
/*
let num1 = Number(prompt("Please enter first number: "));
let num2 = Number(prompt("Please enter second number: "));
let operation = prompt("Please enter operation: ");
let result = 0;

switch (operation) {
    case "plus":
        case "+": {
            result = num1 + num2;
            console.log(`Result = ${result}`);
            break;
        }

  case "minus":
      case "-": {
          result = num1 - num2;
          console.log(`Result = ${result}`);
          break;
  }

  case "*": {
    result = num1 * num2;
    console.log(`Result = ${result}`);
    break;
  }
  
  case "/": {
    result = num1 / num2;
    console.log(`Result = ${result}`);
    break;
}

default:
    {
        console.log("Please try again");
    }
    break;
}
*/
//* ___________________________________________________________
/*
let math = 0,
  sciences = 0,
  arabic = 0,
  religion = 0,
  english;

  math = Number(prompt("please enter Math grade: "));
  sciences = Number(prompt("please enter Sciences grade: "));
  arabic = Number(prompt("please enter Arabic grade: "));
  religion = Number(prompt("please enter Religion grade: "));
  english = Number(prompt("please enter English grade: "));
  
  let result = math + sciences + arabic + religion + english;
  
  if (result < 500 && result >= 400) {
  console.log("Excellent");
} else if (result < 400 && result >= 200) {
    console.log("Good");
} else if (result < 200) {
  console.log("Fail");
}
*/
//* ___________________________________________________________
/*
let subjectMarks = [];

subjectMarks[0] = Number(prompt("please enter Math grade: "));
subjectMarks[1] = Number(prompt("please enter Sciences grade: "));
subjectMarks[2] = Number(prompt("please enter Arabic grade: "));
subjectMarks[3] = Number(prompt("please enter Religion grade: "));
subjectMarks[4] = Number(prompt("please enter English grade: "));

let result =
subjectMarks[0] +
subjectMarks[1] +
subjectMarks[2] +
subjectMarks[3] +
subjectMarks[4];

if (result < 500 && result >= 400) {
    console.log("Excellent");
} else if (result < 400 && result >= 200) {
    console.log("Good");
} else if (result < 200) {
    console.log("Fail");
}
*/
//* ___________________________________________________________
/*
let math = 0,
sciences = 0,
arabic = 0,
religion = 0,
english;

math = Number(prompt("please enter Math grade: "));
sciences = Number(prompt("please enter Sciences grade: "));
arabic = Number(prompt("please enter Arabic grade: "));
religion = Number(prompt("please enter Religion grade: "));
english = Number(prompt("please enter English grade: "));

let result = math + sciences + arabic + religion + english;

if (result < 500 && result >= 400) {
    console.log("Excellent");
} else if (result >= 200) {
    console.log("Good");
} else if (result < 200) {
    console.log("Fail");
}
*/
//* ___________________________________________________________
/*
let math = 0,
sciences = 0,
arabic = 0,
religion = 0,
english;

math = Number(prompt("please enter Math grade: "));
sciences = Number(prompt("please enter Sciences grade: "));
arabic = Number(prompt("please enter Arabic grade: "));
religion = Number(prompt("please enter Religion grade: "));
english = Number(prompt("please enter English grade: "));

let result = math + sciences + arabic + religion + english;

if (result < 200) {
  console.log("Fail");
} else if (result <= 400) {
  console.log("Good");
} else {
    console.log("Excellent");
}
*/
//* ___________________________________________________________
/*
let grade = prompt("Please enter your grade: ");

switch (grade) {
  case "excellent":
    console.log("Grade is greater than 400");
    break;

  case "good":
    console.log("Grade is greater than 200");
    break;

  case "fail":
    console.log("Grade is smaller than 200");
    break;

  default:
    console.log("Please try again");
    break;
}
*/
//* ___________________________________________________________
/*
let grade = prompt("Please enter your grade: ");

if (grade === "excellent") {
    console.log("Grade is greater than 400");
} else if (grade === "good") {
    console.log("Grade is greater than 200");
} else if (grade === "fail") {
    console.log("Grade is smaller than 200");
}
*/
//* ___________________________________________________________