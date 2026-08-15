<?php

fscanf(STDIN, "%s %s", $s, $t);
fscanf(STDIN, "%d %d", $a, $b);
fscanf(STDIN, "%s", $u);

if($s === $u){
  $a --;
}
if($t === $u){
  $b --;
}

echo "$a $b\n";

?>
