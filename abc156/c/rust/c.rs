use std::io::Read;
use std::cmp;

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();

    let _n: usize = iter.next().unwrap().parse().unwrap();
    let x: Vec<i32> = iter.map(|a| a.parse().unwrap()).collect();
    let mut ans = 1000000000;

    for i in 1 .. 101 {
        let mut tmp = 0;
        for &j in &x {
            tmp += (j - i) * (j - i);
        }
        ans = cmp::min(ans, tmp);
    }

    println!("{}", ans);
}
