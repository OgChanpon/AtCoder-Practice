import * as fs from "fs";

function main(){
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/);
  const n = parseInt(input[0], 10);
  const a = input.slice(1).map(Number);

  for(let i = 0; i < n; i++){
    if(a[i] % 2 == 0 && a[i] % 3 != 0 && a[i] % 5 != 0){
      console.log("DENIED");
      return 0;
    }
  }
  console.log("APPROVED");
}

main();
