import * as fs from "fs";

function battle(a: number, b: number, c: number, d: number): string {
  while (true) {
    c -= b;
    if (c <= 0) {
      return "Yes";
    }
    a -= d;
    if (a <= 0) {
      return "No";
    }
  }
}

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);
  const a = input[0];
  const b = input[1];
  const c = input[2];
  const d = input[3];

  console.log(battle(a, b, c, d));
}

main();
