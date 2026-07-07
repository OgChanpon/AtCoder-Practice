<?php
$n = trim(fgets(STDIN));
$a = explode(" ", trim(fgets(STDIN)));

foreach($a as $num){
  if($num % 2 == 0 && $num % 3 != 0 && $num % 5 != 0){
    echo "DENIED\n";
    return;
  }
}
echo "APPROVED\n";
?>
