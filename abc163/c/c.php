<?php 
function manage(int $n, array $a): array {
  $res = array_fill(1, $n, 0);
  foreach($a as $i){
    $res[(int)$i] += 1;
  }
  return $res;
}

$n = (int)trim(fgets(STDIN));
$a = explode(" ", trim(fgets(STDIN)));

$ans = manage($n, $a);

for($i = 1; $i <= $n; $i++){
  echo $ans[$i] . "\n";
}
