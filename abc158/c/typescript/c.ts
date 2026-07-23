import * as fs from "fs";

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);
  const a = input[0];
  const b = input[1];

  for (let i = 0; i < 1001; i++) {
    if (Math.floor(i * 0.08) == a && Math.floor(i * 0.1) == b) {
      console.log(i);
      process.exit(0);
    }
  }
  console.log(-1);
}

main();
