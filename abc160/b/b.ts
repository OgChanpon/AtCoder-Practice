import * as fs from "fs";

function coin(n: number): number {
  return 1000 * Math.floor(n / 500) + 5 * Math.floor((n % 500) / 5);
}

function main() {
  const x = Number(fs.readFileSync("/dev/stdin", "utf-8").trim());
  console.log(coin(x));
}

main();
