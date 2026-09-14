use std::io::Read;

fn luck(n: &str) -> bool {
    if n.contains('7') {
        return true;
    }
    return false;
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let n = buf.split_whitespace().next().unwrap();

    if luck(n) {
        println!("Yes");
    }
    else {
        println!("No");
    }
}
