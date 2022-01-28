use std::io;

fn main() {
    use std::time::Instant;
    let now = Instant::now();

    let ti: u32 = 5000;
    let tj: u32 = 20;
    let p = ti * tj;
    let mut s: u32 = 0;
    for i in 0..ti {
        for j in 0..tj {
            println!("{}", s * 100 / p);
        }
        s = s + tj;
    }
    let elapsed = now.elapsed();
    println!("Execution time: {:.2?}", elapsed);

    io::stdin().read_line(&mut String::new()).unwrap();
}
