import * as fs from "fs";

function vote(n: number, m: number, a: number[], total: number): boolean {
  let check: number = 0;
  for (let i = 0; i < n; i++) {
    if (a[i] * 4 * m >= total) {
      check++;
      if (check == m) {
        return true;
      }
    }
  }
  return false;
}

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);
  const n = input[0];
  const m = input[1];
  const a = input.slice(2);
  let total: number = 0;
  for (let i = 0; i < a.length; i++) {
    total += a[i];
  }
  if (vote(n, m, a, total)) {
    console.log("Yes");
  }
  else {
    console.log("No")
  }
}

main();
