import * as fs from "fs";

function main(){
  const s: string = fs.readFileSync("/dev/stdin", "utf-8").trim();

  console.log("x".repeat(s.length))
}

main();
