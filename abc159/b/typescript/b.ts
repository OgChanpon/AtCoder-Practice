import * as fs from "fs";

function main() {
  const s = fs.readFileSync("/dev/stdin", "utf-8").trim();
  const sl = s.length;
  const sf = s.slice(0, Math.floor((sl - 1) / 2));
  const sb = s.slice(Math.floor((sl + 3) / 2) - 1);

  const kaibun = (str: string) => str === str.split("").reverse().join("");

  if (kaibun(s) && kaibun(sf) && kaibun(sb)) {
    console.log("Yes");
  }
  else {
    console.log("No");
  }
}

main();
