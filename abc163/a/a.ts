import * as fs from "fs";

function cp(r: number): number {
  return 2 * r * Math.PI;
}

function main() {
  const r = Number(fs.readFileSync("/dev/stdin", "utf-8").trim());
  console.log(cp(r));
}

main();
