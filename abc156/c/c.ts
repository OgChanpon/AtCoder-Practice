import * as fs from "fs";

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);
  const n = input[0]
  const x = input.slice(1);
  let ans = 1000000000;

  for (let i = 1; i < 101; i++) {
    let tmp = 0;
    for (let j = 0; j < n; j++) {
      tmp += (x[j] - i) ** 2;
    }
    ans = Math.min(ans, tmp);
  }

  console.log(ans);
}

main();
