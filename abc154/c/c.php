<?php
$n = trim(fgets(STDIN));
$a = explode(" ", trim(fgets(STDIN)));

sort($a);

for($i = 0; $i < $n - 1; $i++){
  if($a[$i] === $a[$i + 1]){
    echo "NO\n";
    return;
  }
}
echo "YES\n";
?>
