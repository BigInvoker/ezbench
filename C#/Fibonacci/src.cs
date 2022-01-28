using System;

namespace Fibonacci
{
    class Program
    {
        public static void Main()
        {
            uint step = 50;
            var watch = System.Diagnostics.Stopwatch.StartNew();

            RecFib(step);

            watch.Stop();
            var elapsedMs = watch.ElapsedMilliseconds;
            Console.WriteLine("Execution time: " + elapsedMs);
            Console.ReadKey();
        }

        private static ulong RecFib(uint num)
        {
            if (num <= 2)
                return 1;
            return (ulong)(RecFib(num - 1) + RecFib(num - 2));
        }
    }
}