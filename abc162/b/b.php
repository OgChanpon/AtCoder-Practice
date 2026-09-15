<?php
$n = trim(fgets(STDIN));
$total = 0;
for($i = 0; $i <= $n; $i++){
  if($i % 3 != 0 && $i % 5 != 0){
    $total += $i;
  }
}
echo $total . "\n";

