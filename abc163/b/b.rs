use std::io::Read;

fn homework(n: i32, a: Vec<i32>) -> i32 {
    let total: i32 = a.iter().sum();
    if n - total < 0 {
        return -1;
    }
    n - total
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace().map(|s| s.parse::<i32>().unwrap());
    let n = iter.next().unwrap();
    let _m = iter.next().unwrap();
    let a: Vec<i32> = iter.collect();

    println!("{}", homework(n, a));
}
