<?php
$n = trim(fgets(STDIN));
$s = [];
for($i= 0; $i < $n; $i++){
  $s[] = trim(fgets(STDIN));
}
sort($s);
$max_cnt = 0;
$cnt = 1;

for($i = 1; $i <= $n; $i++){
  if($i < $n && $s[$i] == $s[$i - 1]){
    $cnt++;
  }
  else{
    if($max_cnt < $cnt){
      $max_cnt = $cnt;
    }
    $cnt = 1;
  }
}

$cnt = 1;
for($i = 1; $i <= $n; $i++){
  if($i < $n && $s[$i] == $s[$i - 1]){
    $cnt++;
  }
  else{
    if($max_cnt == $cnt){
      echo $s[$i - 1] . "\n";
    }
    $cnt = 1;
  }
}
?>
