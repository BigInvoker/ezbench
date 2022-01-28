console.time("Execution time: ");

let ti = 5000;
let tj = 20;
let p = ti * tj;
let s = 0;
for (let i = 0; i <= ti; i++)
{
    for (let j = 0; j <= tj; j++)
    {
        console.log(s * 100 / p);
    }
    s = s + tj;
}

console.timeEnd("Execution time: ");