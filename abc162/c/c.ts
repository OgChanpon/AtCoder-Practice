import * as fs from "fs";

function gcd(a: number, b: number): number {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

function main() {
  const n = Number(fs.readFileSync("/dev/stdin", "utf-8").trim());
  let res: number = 0;

  for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n; j++) {
      for (let k = 1; k <= n; k++) {
        res += gcd(gcd(i, j), k);
      }
    }
  }
  console.log(res);
}

main();
