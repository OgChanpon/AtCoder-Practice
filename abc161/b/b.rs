use std::io::Read;

fn vote(_n: i32, m: i32, a: Vec<i32>) -> bool {
    let total: i32 = a.iter().sum();
    let mut check: i32 = 0;
    for i in a.iter() {
        if i * 4 * m >= total {
            check += 1;
            if check == m {
                return true;
            }
        }
    }
    return false;
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace().map(|s| s.parse::<i32>().unwrap());
    let n = iter.next().unwrap();
    let m = iter.next().unwrap();
    let a: Vec<i32> = iter.collect();

    if vote(n, m, a) {
        println!("Yes");
    }
    else {
        println!("No");
    }
}
