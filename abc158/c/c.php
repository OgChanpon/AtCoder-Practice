<?php
[$a, $b] = explode(" ", trim(fgets(STDIN)));

for($i = 0; $i < 1001; $i++){
  if(intdiv($i * 8, 100) === $a && intdiv($i * 10, 100) === $b){
    echo $i ."\n";
    exit;
  }
}
echo "-1\n";

?>
