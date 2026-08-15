<?php 
[$k, $n] = explode(" ", trim(fgets(STDIN)));
$a = explode(" ", trim(fgets(STDIN)));

$m = 0;
for($i = 0; $i < $n; $i++){
  if($i != $n - 1){
    $m = max($m, $a[$i + 1] - $a[$i]);
  }
  else {
    $m = max($m, $k - $a[$i] + $a[0]);
  }
}

echo $k - $m . "\n"; 
?>
