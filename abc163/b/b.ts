import * as fs from "fs";

function homework(n: number, m: number, a: number[]): number {
  let total = 0;
  for (let i = 0; i < m; i++) {
    total += a[i];
  }
  if (total <= n) {
    return n - total;
  }
  return -1;
}

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);
  const n = input[0];
  const m = input[1];
  const a = input.slice(2);

  console.log(homework(n, m, a));
}

main();
