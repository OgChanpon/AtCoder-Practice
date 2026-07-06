<?php
fscanf(STDIN, "%d %d %d", $a, $b, $c);

if(($a == $b) + ($b == $c) + ($a == $c) == 1){
  echo "Yes\n";
}
else{
  echo "No\n";
}
?>
