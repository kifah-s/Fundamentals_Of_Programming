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