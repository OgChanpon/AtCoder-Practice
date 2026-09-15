import * as fs from "fs";

function fizbuz(n: number): number {
  let total: number = 0;
  for (let i = 0; i <= n; i++) {
    if (i % 3 != 0 && i % 5 != 0) {
      total += i;
    }
  }
  return total;
}

function main() {
  const n = fs.readFileSync("/dev/stdin", "utf-8").trim();

  console.log(fizbuz(Number(n)));
}

main();
