<?php

function cp(int $r): float {
  return 2 * $r * pi();
}

$r = (int)trim(fgets(STDIN));
echo cp($r) . "\n";
