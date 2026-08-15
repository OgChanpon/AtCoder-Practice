import * as fs from "fs";

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(BigInt);
  const n = input[0];
  const a = input[1];
  const b = input[2];

  const ans = n / (a + b) * a + (n % (a + b) < a ? n % (a + b) : a);

  console.log(ans.toString());
}

main();
