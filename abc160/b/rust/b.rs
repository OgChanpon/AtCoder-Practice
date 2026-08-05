use std::io::Read;

fn coin(n: i32) -> i32 {
    1000 * (n / 500) + 5 * ((n % 500) / 5)
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();

    let x: i32 = buf.split_whitespace().next().unwrap().parse().unwrap();

    println!("{}", coin(x));
}
