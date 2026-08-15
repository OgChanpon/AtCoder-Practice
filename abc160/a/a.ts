import * as fs from "fs";

function main() {
  const s = fs.readFileSync("/dev/stdin", "utf-8").trim();

  if (s[2] === s[3] && s[4] === s[5]) {
    console.log("Yes");
  }
  else {
    console.log("No");
  }
}

main();
