<?php
[$n, $k] = explode(" ", trim(fgets(STDIN)));
$mod = $n % $k;
echo min($mod, $k - $mod) . "\n";
?>
