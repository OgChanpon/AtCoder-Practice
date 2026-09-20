<?php 
function sheepwolf(int $s, int $w): bool {
  return $s <= $w;
}

[$s, $w] = array_map('intval', explode(" ", trim(fgets(STDIN))));
if(sheepwolf($s, $w)){
  echo "unsafe\n";
}
else{
  echo "safe\n";
}

