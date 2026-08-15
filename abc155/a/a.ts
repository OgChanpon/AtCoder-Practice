import * as fs from "fs";

function main(){
  const [a, b, c] = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/).map(Number);

  if(new Set([a, b, c]).size === 2){
    console.log("Yes");
  }
  else{
    console.log("No");
  }
}

main();
