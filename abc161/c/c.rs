use std::io::Read;
use std::cmp::min;

fn repi(n: i64, k: i64) -> i64 {
    let ans = min(n % k, k - (n % k));
    ans
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace().map(|s| s.parse::<i64>().unwrap());
    let n = iter.next().unwrap();
    let k = iter.next().unwrap();

    println!("{}", repi(n, k));
}
