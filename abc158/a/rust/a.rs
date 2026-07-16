use std::io::Read;

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let s = buf.trim();
    let b = s.as_bytes();

    if b[0] == b[1] && b[1] == b[2] {
        println!("No");
    }
    else{
        println!("Yes");
    }
}
