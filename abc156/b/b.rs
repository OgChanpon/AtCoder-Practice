use std::io::Read;

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();
    let mut n: i32 = iter.next().unwrap().parse().unwrap();
    let k: i32 = iter.next().unwrap().parse().unwrap();
    let mut cnt = 0;

    while n > 0 {
        cnt += 1;
        n /= k;
    }

    println!("{}", cnt);
}
