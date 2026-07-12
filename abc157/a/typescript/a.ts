import * as fs from "fs"

function main() {
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/)
  const n = Number(input[0])

  console.log(Math.floor((n + 1) / 2))
}

main()
