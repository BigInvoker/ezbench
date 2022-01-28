console.time("Execution time: ");

let step = 50;

recFib(step);

console.timeEnd("Execution time: ");


function recFib(num) {
    if (num <= 2)
        return 1;
    return recFib(num - 1) + recFib(num - 2);
}