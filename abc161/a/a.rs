use std::io::Read;

fn swap(x: i32, y: i32, z: i32){
    println!("{} {} {}", z, x, y);
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace().map(|s| s.parse::<i32>().unwrap());
    let x = iter.next().unwrap();
    let y = iter.next().unwrap();
    let z = iter.next().unwrap();

    swap(x, y, z);
}
