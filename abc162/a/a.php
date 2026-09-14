<?php
$n = trim(fgets(STDIN));
for($i = 0; $i < 3; $i++){
  if($n[$i] == '7'){
    echo "Yes\n";
    exit;
  }
}
echo "No\n";
?>
