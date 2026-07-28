<?php 
$s = trim(fgets(STDIN));

if($s[2] == $s[3] && $s[4] == $s[5]){
  echo "Yes\n";
}
else{
  echo "No\n";
}
?>
