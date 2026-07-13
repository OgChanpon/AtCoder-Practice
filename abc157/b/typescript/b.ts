import * as fs from "fs";

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number)
  const a: number[][] = []
  for (let i = 0; i < 3; i++) {
    a.push(input.slice(i * 3, i * 3 + 3))
  }
  const n = input[9]
  const b = input.slice(10)
  let c: number[][] = [
    [0, 0, 0],
    [0, 0, 0],
    [0, 0, 0]
  ]
  let flag = 0

  for (let i = 0; i < n; i++) {
    for (let j = 0; j < 3; j++) {
      for (let k = 0; k < 3; k++) {
        if (a[j][k] == b[i]) {
          c[j][k] = 1;
        }
      }
    }
  }

  for (let i = 0; i < 3; i++) {
    if (c[i][0] && c[i][1] && c[i][2])
      flag = 1;
    if (c[0][i] && c[1][i] && c[2][i])
      flag = 1;
  }
  if (c[0][0] && c[1][1] && c[2][2])
    flag = 1;
  if (c[0][2] && c[1][1] && c[2][0])
    flag = 1;

  if (flag) {
    console.log("Yes")
  }
  else {
    console.log("No")
  }
}

main()
