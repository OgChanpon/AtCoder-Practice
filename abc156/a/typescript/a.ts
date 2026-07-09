import * as fs from "fs";

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/);
  const n = parseInt(input[0], 10);
  const r = parseInt(input[1], 10);

  console.log(r + 100 * Math.max(0, 10 - n));
}

main();
