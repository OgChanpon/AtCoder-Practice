<?php
$x = trim(fgets(STDIN));
echo 1000 * intdiv($x, 500) + 5 * intdiv($x % 500, 5) . "\n";
?>
