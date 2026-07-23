use std::io::Read;

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();

    let a: i32 = iter.next().unwrap().parse().unwrap();
    let b: i32 = iter.next().unwrap().parse().unwrap();

    for i in 0 .. 1001 {
        if i * 8 / 100 == a && i * 10 /100 == b {
            println!("{}", i);
            return;
        }
    }
    println!("-1");
}
