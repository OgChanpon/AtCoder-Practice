use std::io::Read;

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();

    let s = iter.next().unwrap();
    let t = iter.next().unwrap();

    let mut a: i32 = iter.next().unwrap().parse().unwrap();
    let mut b: i32 = iter.next().unwrap().parse().unwrap();

    let u = iter.next().unwrap();

    if s == u {
        a -= 1;
    }
    if t == u {
        b -= 1;
    }
    println!("{} {}", a, b);
}
