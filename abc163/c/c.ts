import * as fs from "fs";

function manage(n: number, a: number[]): number[] {
  const res: number[] = new Array(n + 1).fill(0);
  for (const i of a) {
    res[i] += 1;
  }
  return res;
}

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);
  const n = input[0];
  const a = input.slice(1);
  const ans = manage(n, a)

  console.log(ans.slice(1).join("\n"));
}

main();
