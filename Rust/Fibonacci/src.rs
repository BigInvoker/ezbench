


use std::io;
use std::time::Instant;
    


fn main() {
    let step: u32 = 50;

    let now = Instant::now();

    let result = rec_fib(step);

    let elapsed = now.elapsed();
    println!("Fib number in {}th step, is: {}", step, result);
    println!("Execution time: {:.2?}", elapsed);
    io::stdin().read_line(&mut String::new()).unwrap();
}



fn rec_fib(num: u32) -> u64 {
    if num <= 2 {
        return 1
    }
    rec_fib(num - 1) + rec_fib(num - 2)
}

fn nrec_fib(num: u64) -> u64 {
    if num <= 2 {
        1
    } else {
        let mut a:u64 = 1;
        let mut b:u64 = 1;
        let mut c:u64 = 0;

        for i in 0..(num-2) {
            c = a + b;
            a = b;
            b = c;
        }
        c
    }
}


