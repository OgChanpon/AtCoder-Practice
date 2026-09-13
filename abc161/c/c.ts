import * as fs from "fs";

function repi(n: bigint, k: bigint): bigint {
  let mod: bigint = n % k;
  return mod <= k - mod ? mod : k - mod;
}

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(BigInt);
  const n = input[0];
  const k = input[1];

  console.log(repi(n, k).toString());
}

main();
