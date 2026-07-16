use std::io::Read;

fn main() {
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();

    let n: usize = iter.next().unwrap().parse().unwrap();
    let m: usize = iter.next().unwrap().parse().unwrap();
    let mut rules: Vec<(usize, i32)> = Vec::with_capacity(m);
    for _ in 0..m {
        let s: usize = iter.next().unwrap().parse().unwrap();
        let c: i32 = iter.next().unwrap().parse().unwrap();
        rules.push((s, c));
    }

    for i in 0..1000 {
        let str = i.to_string();

        if str.len() == n {
            let mut flag = true;
            let bytes = str.as_bytes();
            for &(s, c) in &rules {
                if (bytes[s - 1] - b'0') as i32 != c {
                    flag = false;
                    break;
                }
            }
            if flag {
                println!("{}", i);
                return;
            }
        }
    }
    println!("-1");
}
