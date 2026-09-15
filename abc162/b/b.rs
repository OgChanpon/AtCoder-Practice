use std::io::Read;

fn fizbuz(n: i64) -> i64 {
    let mut total = 0;
    for i in 1 ..= n {
        if i % 3 != 0 && i % 5 != 0 {
            total += i;
        }
    }
    total
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let n = buf.split_whitespace().next().unwrap().parse::<i64>().unwrap();

    println!("{}", fizbuz(n));
}
