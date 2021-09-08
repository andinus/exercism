pub fn is_armstrong_number(num: u32) -> bool {
    if num == 0 {
        return true;
    }

    let len = (num as f32).log10() as u32 + 1;

    let mut arms = 0;
    let mut tmp = num;
    while tmp != 0 {
        let rem = tmp % 10;
        arms += rem.pow(len);
        tmp /= 10
    }

    return arms == num;
}
