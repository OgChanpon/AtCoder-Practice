use std::io;

fn main(){
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();

    println!("{}", "x".repeat(s.trim().len()));
}
