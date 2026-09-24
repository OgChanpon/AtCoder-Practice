<?php 
function battle(int $a, int $b, int $c, int $d): string {
  while(true){
    $c -= $b;
    if($c <= 0){
      return "Yes";
    }
    $a -= $d;
    if($a<= 0){
      return "No";
    }
  }
}

[$a, $b, $c, $d] = array_map('intval', explode(" ", trim(fgets(STDIN))));

echo battle($a, $b, $c, $d) . "\n";

