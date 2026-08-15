import * as fs from "fs";

function main(){
  const input = fs.readFileSync("/dev/stdin", "utf-8").trim().split(/\s+/);
  const n = parseInt(input[0], 10);
  const s = new Map<string, number>();
  let max_cnt = 0;

  for(let i = 1; i <= n; i++){
    const word = input[i];

    const cnt = (s.get(word) || 0) + 1;
    s.set(word, cnt);

    if(cnt > max_cnt){
      max_cnt = cnt;
    }
  }

  const ans: string[] = [];
  for(const [word, cnt] of s.entries()){
    if(cnt === max_cnt){
      ans.push(word);
    }
  }

  ans.sort();

  console.log(ans.join("\n"));
}

main();
