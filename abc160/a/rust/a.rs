use std::io::Read;

fn coffee(n: &[u8]) -> bool {
    n[2] == n[3] && n[4] == n[5]
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();

    let s = buf.split_whitespace().next().unwrap().as_bytes();

    if coffee(s) {
        println!("Yes");
    }
    else {
        println!("No");
    }
}
