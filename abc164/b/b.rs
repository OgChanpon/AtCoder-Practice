use std::io::Read;

fn battle(mut a: i32, b: i32, mut c: i32, d: i32) -> &'static str {
    loop {
        c -= b;
        if c <= 0 {
            return "Yes";
        }
        a -= d;
        if a <= 0 {
            return "No";
        }
    }
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace().map(|s| s.parse::<i32>().unwrap());
    let a = iter.next().unwrap();
    let b = iter.next().unwrap();
    let c = iter.next().unwrap();
    let d = iter.next().unwrap();

    println!("{}", battle(a, b, c, d));
}
