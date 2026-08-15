<?php
$n = trim(fgets(STDIN));
$x = explode(" ", trim(fgets(STDIN)));
$ans = PHP_INT_MAX;

for($i = 1; $i < 101; $i++){
  $tmp = 0;
  foreach($x as $j){
    $tmp += ($j - $i) ** 2;
  }
  $ans = min($ans, $tmp);
}

echo $ans . "\n";
?>
