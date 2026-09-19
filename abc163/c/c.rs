use std::io::Read;

fn manage(a: Vec<i32>, res: &mut Vec<i32>) {
    for i in a.iter() {
        res[*i as usize] += 1
    }
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace().map(|s| s.parse::<i32>().unwrap());
    let n = iter.next().unwrap();
    let a: Vec<i32> = iter.collect();
    let mut res = vec![0; (n + 1) as usize];

    manage(a, &mut res);
    for i in 1 ..= n {
        println!("{}", res[i as usize]);
    }
}
