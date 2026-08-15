import * as fs from "fs";

function swap(x: number, y: number, z: number) {
  console.log(z, x, y);
}

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);
  const x = input[0];
  const y = input[1];
  const z = input[2];
  swap(x, y, z);
}

main();
