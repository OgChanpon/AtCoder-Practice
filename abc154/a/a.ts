import * as fs from "fs";

function main(){
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/);

  if(input.length === 0 || input[0] === "") return;

  const s: string = input[0];
  const t: string = input[1];

  let a: number = parseInt(input[2], 10);
  let b: number = parseInt(input[3], 10);
  const u: string = input[4];

  if(s === u){
    a --;
  }
  if(t === u){
    b --;
  }

  console.log(`${a} ${b}`);
}

main();
