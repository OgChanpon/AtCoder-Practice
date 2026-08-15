import * as fs from "fs";

function main() {
  const l = Number(fs.readFileSync("/dev/stdin", "utf-8").trim());
  const x = l / 3;

  console.log((x ** 3).toFixed(12));
}

main();
