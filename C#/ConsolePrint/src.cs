using System;

namespace ConsolePrint
{
    public class Program
    {
        public static void Main()
        {
            var watch = System.Diagnostics.Stopwatch.StartNew();

            int ti = 5000;
            int tj = 20;
            int p = ti * tj;
            int s = 0;
            for (int i = 0; i <= ti; i++)
            {
                for (int j = 0; j <= tj; j++)
                {
                    Console.WriteLine(s * 100 / p);
                }
                s = s + tj;
            }

            watch.Stop();
            var elapsedMs = watch.ElapsedMilliseconds;
            Console.WriteLine("Execution time: " + elapsedMs);
            Console.ReadKey();
        }
    }
}