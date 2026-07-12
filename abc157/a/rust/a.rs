use std::io::Read;

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();

    let n: u32 = buf.trim().parse().unwrap();

    println!("{}", (n + 1) / 2);
}
