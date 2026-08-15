<?php
[$n, $a, $b] = explode(" ", trim(fgets(STDIN)));

echo intdiv($n, ($a + $b)) * $a + min($a, $n % ($a + $b)) . "\n";
?>
