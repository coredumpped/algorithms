pub fn main() {
    println!("======== Binary Search! ========");

    let array = vec![3, 8, 23, 48, 98, 100];
    let target = 98;
    // TODO: learn how borrowing works, so you don't have to clone every time
    let res = binary_search(array.clone(), target);

    println!(
        "searching array {:?} for value {} took {} steps, the found value is at index {}",
        array, target, res.1, res.0
    );
}

fn binary_search(array: Vec<i32>, target: i32) -> (i32, i32) {
    let mut low: usize = 0;
    let mut high: usize = array.len() - 1;
    let mut steps = 0;

    while low <= high {
        steps += 1;
        let mid = (high + low) / 2;
        if array[mid] == target {
            return (mid as i32, steps);
        }

        if array[mid] > target {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    // rust way of doing implicit return
    (-1, steps)
}
