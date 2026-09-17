use std::io::Read;
use std::f32::consts::PI;

fn cp(r: f32) -> f32 {
    2.0 * r * PI
}

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let r = buf.split_whitespace().next().unwrap().parse::<f32>().unwrap();

    println!("{}", cp(r));
}
