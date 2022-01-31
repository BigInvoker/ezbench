const print = @import("std").debug.print;

pub fn main() anyerror!void {
    var step: u32 = 50;
    var result = recFib(step);
    print("{}", .{result});
}




pub fn recFib(num: u32) u64 {
    if (num <= 2) {
        return 1;
    }
    return recFib(num - 1) + recFib(num - 2);
}