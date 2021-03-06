Save the prisoner Question



using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Solution {
//int numberOfPrisoners, int numberOfSweets, int prisonerId
    // Complete the saveThePrisoner function below.
    static int saveThePrisoner(int n, int m, int s) {
            
            var PrisonerEndPoint = n - s + 1;

        if (m > PrisonerEndPoint)
        {
            s = 1;
            m -= PrisonerEndPoint;
            m = m % n;
        }

        if (m == 0)
            s = n;
        else
            s += m - 1;

        return s;

    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int t = Convert.ToInt32(Console.ReadLine());

        for (int tItr = 0; tItr < t; tItr++) {
            string[] nms = Console.ReadLine().Split(' ');

            int n = Convert.ToInt32(nms[0]);

            int m = Convert.ToInt32(nms[1]);

            int s = Convert.ToInt32(nms[2]);

            int result = saveThePrisoner(n, m, s);

            textWriter.WriteLine(result);
        }

        textWriter.Flush();
        textWriter.Close();
    }
}
