use std::io::Read;
use std::collections::BTreeMap;

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();
    iter.next();
    let mut counts = BTreeMap::new();

    for s in iter {
        *counts.entry(s).or_insert(0) += 1;
    }
    let max_cnt = counts.values().max().unwrap();

    for (k, v) in &counts {
        if *v == *max_cnt {
            println!("{}", k);
        }
    }
}
