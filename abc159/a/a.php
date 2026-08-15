<?php
[$n, $m] = explode(" ", trim(fgets(STDIN)));

echo intdiv($n * ($n - 1), 2) + intdiv($m * ($m - 1), 2) . "\n";
?>
