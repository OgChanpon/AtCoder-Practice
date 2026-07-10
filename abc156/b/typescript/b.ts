import * as fs from "fs";

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/);
  let n = parseInt(input[0], 10);
  const k = parseInt(input[1], 10);
  let cnt = 0;

  while (n > 0) {
    cnt++;
    n = Math.floor(n / k);
  }

  console.log(cnt);
}

main();
