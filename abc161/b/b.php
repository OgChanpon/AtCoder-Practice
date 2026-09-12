<?php
[$n, $m] = explode(" ", trim(fgets(STDIN)));
$a = explode(" ", trim(fgets(STDIN)));
$check = 0;
$total = array_sum($a);
for($i = 0; $i < $n; $i++){
  if($a[$i] * 4 * $m >= $total){
    $check ++;
  }
}
if($check >= $m){
  echo "Yes\n";
}
else{
  echo "No\n";
}

?>
