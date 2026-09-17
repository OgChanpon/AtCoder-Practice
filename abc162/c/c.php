<?php

function gcd(int $a, int $b): int {
  if($b == 0){
    return $a;
  }
  return gcd($b, $a % $b);
}

$n = (int)trim(fgets(STDIN));
$res = 0;

for ($i = 1; $i <= $n; $i++) {
    for ($j = 1; $j <= $n; $j++) {
        for ($k = 1; $k <= $n; $k++) {
            $res += gcd(gcd($i, $j), $k);
        }
    }
}

echo $res . "\n";
