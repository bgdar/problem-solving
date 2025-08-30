mod two_amount;

fn main() {
    println!("Hello, world!");
    let nums = [2, 20, 3, 4, 1];
    let target = 21;

    match two_amount::two_satck(&nums, &target) {
        Ok([nilai1, nilai2, index1, index2]) => {
            println!("data arrat {:?}", nums);
            println!(
                "[nilai|index] [{}|{}] + [{}|{}]  = {}",
                nilai1, index1, nilai2, index2, target
            );
        }
        Err(err_msg) => {
            println!("Terjadi kesalahan: {}", err_msg);
        }
    }
}

#[test]
fn testtwo_jumlah() {
    let nums: [i32; 5] = [2, 3, 5, 7, 1];
    let target: i32 = 9;

    match two_amount::two_satck(&nums, &target) {
        Ok([nilai1, nilai2, index1, index2]) => {
            println!(
                "[nilai-ke|index-ke] : [{}|{}] + [{}|{}]  = {}",
                nilai1, index1, nilai2, index2, target
            );
        }
        Err(err_msg) => {
            println!("Terjadi kesalahan: {}", err_msg);
        }
    }
}
