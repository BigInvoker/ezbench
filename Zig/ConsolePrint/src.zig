const print = @import("std").debug.print;

pub fn main() anyerror!void {
    var ti: u32 = 5000;
    var tj: u32 = 20;
    // var p = ti * tj;
    // var s: u32 = 0;
    var i: u32 = 0;
    // var j: u32 = 0;

    while (i < (ti * tj)) {
        // while (j < tj) {
        //     print("{}\n", .{s * 100 / p});
        //     j = j + 1;
        // }
        // s = s + tj;
        // i = i + 1;
        print("{}\n", .{i});
        i = i + 1;
    }


    // loop (var i: u32 = 0; i < ti; i++) {
    //     loop (var j: u32 = 0; j < tj; j++) {
    //         print("{}\n", .{s * 100 / p});
    //     }
    //     s = s + tj;
    // }
}