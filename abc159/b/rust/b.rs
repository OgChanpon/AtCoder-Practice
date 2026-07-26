use std::io::Read;

fn kaibun(s: &str) -> bool {
    s.chars().eq(s.chars().rev()) 
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();

    let s = iter.next().unwrap();
    let sl = s.len();
    let sf = &s[..(sl - 1) / 2];
    let sb = &s[(sl + 3) / 2 - 1..];

    if kaibun(s) && kaibun(sf) && kaibun(sb) {
        println!("Yes");
    }
    else{
        println!("No");
    }
}
