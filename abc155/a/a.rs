use std::io::{self, Read};

fn main(){
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    let mut iter = input.split_whitespace();
    let a: i32 = iter.next().unwrap().parse().unwrap();
    let b: i32 = iter.next().unwrap().parse().unwrap();
    let c: i32 = iter.next().unwrap().parse().unwrap();

    if (a == b) as i32 + (b == c) as i32 + (a == c) as i32 == 1{
        println!("Yes");
    } 
    else{
        println!("No");
    }
}
