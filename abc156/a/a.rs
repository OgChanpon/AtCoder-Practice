use std::io::Read;
use std::cmp;

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();
    let n : i32 = iter.next().unwrap().parse().unwrap();
    let r : i32 = iter.next().unwrap().parse().unwrap();

    println!("{}", r + 100 * cmp::max(0, 10 - n));
}
