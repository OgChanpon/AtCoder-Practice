<?php
$a = [];
for($i = 0; $i < 3; $i++){
  $a[] = explode(" ", trim(fgets(STDIN)));
}
$c = [
  [0, 0, 0],
  [0, 0, 0],
  [0, 0, 0]
];
$n = trim(fgets(STDIN));
$flag = 0;

for($i = 0; $i < $n; $i++){
  $b = trim(fgets(STDIN));
  for($j = 0; $j < 3; $j++){
    for($k = 0; $k < 3; $k++){
      if($a[$j][$k] == $b){
        $c[$j][$k] = 1;
      }
    }
  }
}

for($i = 0; $i < 3; $i++) {
    if ($c[$i][0] && $c[$i][1] && $c[$i][2])
      $flag = 1;
    if ($c[0][$i] && $c[1][$i] && $c[2][$i])
      $flag = 1;
  }
if ($c[0][0] && $c[1][1] && $c[2][2]) $flag = 1;
if ($c[0][2] && $c[1][1] && $c[2][0]) $flag = 1;

if($flag){
 echo "Yes\n"; 
}
else{
  echo "No\n";
}
?>
