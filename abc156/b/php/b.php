<?php
[$n, $k] = explode(" ", trim(fgets(STDIN)));
$cnt = 0;

while($n > 0){
  $cnt++;
  $n = floor($n / $k);
}

echo "$cnt\n"
?>
