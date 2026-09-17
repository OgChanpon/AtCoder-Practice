use std::io::Read;

fn gcd(a: i32, b: i32) -> i32 {
    if b == 0 {
        return a;
    }
    gcd(b, a % b)
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let n = buf.split_whitespace().next().unwrap().parse::<i32>().unwrap();

    let mut res = 0;
    for i in 1 ..= n {
        for j in 1 ..= n {
            for k in 1 ..= n {
                res += gcd(gcd(i, j), k);
            }
        }
    }
    println!("{}", res);
}
