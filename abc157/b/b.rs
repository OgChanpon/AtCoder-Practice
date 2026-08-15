use std::io::Read;

fn main(){
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();

    let a: [[i32; 3]; 3] = std::array::from_fn(|_| {
        std::array::from_fn(|_| iter.next().unwrap().parse().unwrap())
    });
    let n: usize = iter.next().unwrap().parse().unwrap();
    let b: Vec<i32> = iter.map(|x| x.parse().unwrap()).collect();
    let mut flag = false;
    let mut c = [[0; 3]; 3];

    for i in 0 .. n {
        for j in 0 .. 3 {
            for k in 0 .. 3 {
                if a[j][k] == b[i] {
                    c[j][k] = 1;
                }
            }
        }
    }

  for i in 0 .. 3 {
    if c[i][0] == 1 && c[i][1] == 1 && c[i][2] == 1 {
        flag = true;
        }
    if c[0][i] == 1 && c[1][i] == 1 && c[2][i] == 1 {
        flag = true;
        }
  }
  if c[0][0] == 1 && c[1][1] == 1 && c[2][2] == 1 {
        flag = true;
    }
  if c[0][2] == 1 && c[1][1] == 1 && c[2][0] == 1 {
        flag = true;
    }

  if flag {
    println!("Yes");
  }
  else {
    println!("No");
  }
}
