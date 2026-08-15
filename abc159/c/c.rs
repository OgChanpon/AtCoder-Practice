use std::io::Read;

fn vmax(x: f64) -> f64 {
    x * x * x
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    
    let l: f64 = buf.split_whitespace().next().unwrap().parse().unwrap();
    let x = l / 3.0;
    println!("{:.12}", vmax(x));
}
