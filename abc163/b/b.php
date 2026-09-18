<?php

function homework(int $n, array $a): int {
  $total = array_sum($a);
  if($total <= $n){
    return $n - $total;
  }
  return -1;
}

[$n, $m] = explode(" ", trim(fgets(STDIN)));
$a = explode(" ", trim(fgets(STDIN)));

echo homework($n, $a) . "\n";
