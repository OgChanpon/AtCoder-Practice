use std::io::{self, Read};

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();
    let n: usize = iter.next().unwrap().parse().unwrap();
    let mut a: Vec<i32> = iter.map(|x| x.parse().unwrap()).collect();

    a.sort();

    for i in 0 .. n - 1{
        if a[i] == a[i + 1]{
            println!("NO");
            return;
        }
    }
    println!("YES")
}
