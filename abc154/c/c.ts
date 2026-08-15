import * as fs from "fs";

function main(){
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/);
  const n = parseInt(input[0], 10);
  const a = input.slice(1).map(Number);

  const ua = new Set(a);

  if(ua.size === n){
    console.log("YES");
  }
  else{
    console.log("NO");
  }
}

main();
