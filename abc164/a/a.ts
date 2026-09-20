import * as fs from "fs";

function sheepwolf(s: number, w: number): boolean {
  return s <= w;
}

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);
  const s = input[0];
  const w = input[1];

  if (sheepwolf(s, w)) {
    console.log("unsafe");
  }
  else {
    console.log("safe");
  }
}

main();
