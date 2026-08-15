use std::io::Read;
use std::cmp::max;

fn travel(k: i32, mut a: Vec<i32>) -> i32 {
    let mut m = 0;
    a.push(k + a[0]);
    for w in a.windows(2) {
        m = max(m, w[1] - w[0]);
    }
    k - m
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace().map(|s| s.parse::<i32>().unwrap());
    let k = iter.next().unwrap();
    let _n = iter.next().unwrap();
    let a: Vec<i32> = iter.collect();

    println!("{}", travel(k, a));
}
