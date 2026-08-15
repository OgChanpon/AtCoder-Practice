<?php
[$n, $r] = fscanf(STDIN, "%d %d");
echo $r + 100 * max(0, 10 - $n) . "\n";
?>
