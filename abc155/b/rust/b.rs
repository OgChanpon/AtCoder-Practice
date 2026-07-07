use std::io::Read;

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();

    let n: usize = iter.next().unwrap().parse().unwrap();
    let a: Vec<i32> = iter.map(|x| x.parse().unwrap()).collect();

    for x in a{
        if x % 2 == 0 && x % 3 != 0 && x % 5 != 0{
            println!("DENIED");
            return;
        }
    }
    println!("APPROVED");
}
