import * as fs from "fs";

function luck(n: string): boolean {
  if (n.includes('7')) {
    return true;
  }
  return false;
}

function main() {
  const n = fs.readFileSync("/dev/stdin", "utf-8").trim();

  if (luck(n)) {
    console.log("Yes");
  }
  else {
    console.log("No");
  }
}

main();
