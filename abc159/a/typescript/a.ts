import * as fs from "fs";

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);
  const n = input[0];
  const m = input[1];

  console.log(Math.floor(n * (n - 1) / 2) + Math.floor(m * (m - 1) / 2));
}

main();
