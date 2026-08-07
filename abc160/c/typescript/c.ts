import * as fs from "fs";

function travel(k: number, n: number, a: number[]): number {
  let m = 0;
  a.push(k + a[0]);
  for (let i = 0; i < n; i++) {
    m = Math.max(m, a[i + 1] - a[i]);
  }
  return k - m;
}

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);
  const k = input[0];
  const n = input[1];
  const a = input.slice(2);

  console.log(travel(k, n, a));
}

main();
