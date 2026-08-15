import * as fs from "fs";

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);
  const n = input[0];
  const m = input[1];
  const rules: number[][] = [];
  for (let i = 0; i < m; i++) {
    rules.push([input[2 + i * 2], input[3 + i * 2]]);
  }

  for (let i = 0; i < 1000; i++) {
    const str = String(i);
    if (str.length === n) {
      let flag = true;
      for (const rule of rules) {
        if (Number(str[rule[0] - 1]) !== rule[1]) {
          flag = false;
          break;
        }
      }
      if (flag) {
        console.log(i);
        process.exit(0)
      }
    }
  }
  console.log(-1);
}

main();
