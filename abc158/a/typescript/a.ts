import * as fs from "fs";

function main() {
  const s = fs.readFileSync("/dev/stdin", "utf-8").trim();

  if (s == "AAA" || s == "BBB") {
    console.log("No");
  }
  else {
    console.log("Yes");
  }
}

main();
