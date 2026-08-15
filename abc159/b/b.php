<?php
$s = trim(fgets(STDIN));
$sl = strlen($s);
$sf = substr($s, 0, intdiv(($sl - 1), 2));
$sb = substr($s, intdiv(($sl + 3), 2) - 1);

if ($s === strrev($s) && $sf === strrev($sf) && $sb === strrev($sb)) {
    echo "Yes\n";
} else {
    echo "No\n";
}
?>
