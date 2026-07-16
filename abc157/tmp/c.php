<?php
[$n, $m] = explode(" ", trim(fgets(STDIN)));
$rules = [];
for($i = 0; $i < $m; $i++){
  [$s, $c] = explode(" ", trim(fgets(STDIN)));
  $rules[] = [$s, $c];
}

for($i = 0; $i < 1000; $i++){
  $str = (string)$i;
  if(strlen($str) == $n){
    $flag = true;
    foreach ($rules as $rule){
      if($str[$rule[0] - 1] != $rule[1]){
        $flag = false;
        break;
      }
    }
    if($flag){
      echo "$i" . "\n";
      exit; 
    }
  }
}
echo "-1\n";
?>
