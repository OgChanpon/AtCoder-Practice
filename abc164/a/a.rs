use std::io::Read;

fn sheepwolf(s: i32, w: i32) -> bool {
    s <= w
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace().map(|s| s.parse::<i32>().unwrap());
    let s = iter.next().unwrap();
    let w = iter.next().unwrap();

    if sheepwolf(s, w) {
        println!("unsafe");
    }
    else {
        println!("safe");
    }
}
